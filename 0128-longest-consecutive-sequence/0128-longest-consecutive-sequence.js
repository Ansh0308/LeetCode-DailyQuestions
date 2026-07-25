/**
 * @param {number[]} nums
 * @return {number}
 */
var longestConsecutive = function(nums) {
    nums=nums.sort((a,b)=>{
        return a-b;
    });
    const myset=new Set();
    nums.forEach((ele)=>{
        myset.add(ele);
    });
    let prev=myset[0]-1;
    let lans=0,ans=0;
    for(let ele of myset){
        if(ele==prev+1){
            lans++;
        }
        else{
            lans=1;
        }
        ans=Math.max(ans,lans);
        prev=ele;
    }
    return ans;
    
};