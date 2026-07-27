/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    const n=nums.length;
    nums.sort((a,b)=>{
        return a-b;
    });
    let ans=[];
    for(let i=0;i<n;i++){
        if(i>0 && i<n && nums[i]==nums[i-1])continue;
        let left=i+1,right=n-1;
        while(left<right){
            const sum=nums[i]+nums[left]+nums[right];
            if(sum<0){
                left++;
            }
            else if(sum>0){
                right--;
            }
            else{
                ans.push([nums[i],nums[left],nums[right]]);
                left++;
                right--;
                while(left<n && nums[left]==nums[left-1])left++;
                while(right>0 && right<n-1 &&nums[right]==nums[right+1])right--;
            }
        }
        
    }
    return ans;
    
};