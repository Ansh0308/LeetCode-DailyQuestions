/**
 * @param {string} s
 * @return {number}
 */
var countSubstrings = function(s) {
    const n=s.length;
    let ans=0
    for(let i=0;i<n;i++){
        let left=i,right=i;
        while(left>=0 && right<n && s[left]==s[right]){
            ans++;
            left--;
            right++;
        }
        }
        for(let i=0;i<n;i++){
        let left=i,right=i+1;
        while(left>=0 && right<n && s[left]==s[right]){
            ans++;
            left--;
            right++;
        }}
        return ans;
    
};