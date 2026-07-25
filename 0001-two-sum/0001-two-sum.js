/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let n=nums.length;
    const freq=new Map();
    for(let i=0;i<n;i++){
        if(freq.has(target-nums[i])){
            return [freq.get(target-nums[i]),i];
        }
        freq.set(nums[i],i);
    }
    return [-1,-1];
};