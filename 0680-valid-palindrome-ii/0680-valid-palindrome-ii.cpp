class Solution {
public:
    bool isPal(string s,int i,int j){
       
        while(i<=j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        
        int n=s.size();
        int st=0,end=n-1;
        while(st<=end){
            if(s[st]==s[end]){
                st++;
                end--;
            }
            else{
                return isPal(s,st+1,end) || isPal(s,st,end-1);

            }
        }
        return true;
        
    }
};