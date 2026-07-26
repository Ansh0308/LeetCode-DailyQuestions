/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function(s) {
    const n=s.length;
    let ans=0,idx=0;
    for(let i=0;i<n;i++){
        let left=i,right=i;
        while(left>=0 && right<n && s[left]==s[right]){
            const curr=right-left+1;
            if(curr>ans){
                ans=curr;
                idx=left;
            }
            
            left--;
            right++;
        }
    }
    for(let i=0;i<n;i++){
        let left=i,right=i+1;
        while(left>=0 && right<n && s[left]==s[right]){
            const curr=right-left+1;
            if(curr>ans){
                ans=curr;
                idx=left;
            }
            left--;
            right++;
        }
    }
    return s.substr(idx,ans);

};