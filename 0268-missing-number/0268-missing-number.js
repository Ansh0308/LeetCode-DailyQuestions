/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    const n=nums.length;
    // let frq=new Set();
    // for(let ele of nums){
    //     frq.add(ele);
    // }
    // for(let i=0;i<=n;i++){
    //     if(!frq.has(i))return i;
    //}
    
    let ans=0;
    for(let ele of nums){
        ans^=ele;
    }
    for(let i=0;i<=n;i++){
        ans^=i;
    }
    
    return ans;
};