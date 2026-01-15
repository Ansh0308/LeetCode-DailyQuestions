class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n<=1)return s;

        int len=0;
        int st=0,end=0;
        //odd len ans
        for(int i=0;i<s.size();i++){
            int l=i,r=i;
            
            while(l>=0 && r<n && s[l]==s[r]){
                l--;
                r++;
            }
            if(r-l-1>len){
                len=r-l-1;
                st=l+1;
                end=r-1;
            }
            

        }
        for(int i=0;i<n;i++){
            int prev=i,next=i+1;
            while(prev>=0 && next<n && s[prev]==s[next]){
                prev--;
                next++;
            }
            if(next-prev-1>len){
                len=next-prev-1;
                st=prev+1;
                end=next-1;
            }
        }
        return s.substr(st,len);
        
    }
};