class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==1)return s;
        int maxL=0,st=0,end=0;
        
        for(int i=0;i<n;i++){
            int l=i,r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(maxL<r-l+1){
                    maxL=r-l+1;
                    st=l,end=r;
                }
                l--;
                r++;
            }
        }
        
            for(int i=0;i<n;i++){
            int l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(maxL<r-l+1){
                    maxL=r-l+1;
                    st=l,end=r;
                }
                l--;
                r++;
            }
        }
        
        if(maxL==0)maxL=1;
    return s.substr(st,maxL);
        
    }
};