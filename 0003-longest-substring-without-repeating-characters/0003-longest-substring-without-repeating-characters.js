/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let n=s.length;
    let right=0,left=0,ans=0;
    const frq=new Set();
    while(right<n){
        while(frq.has(s[right])){
            frq.delete(s[left++]);
        }
        ans=Math.max(ans,right-left+1);
        frq.add(s[right++]);
    }
    return ans;

};