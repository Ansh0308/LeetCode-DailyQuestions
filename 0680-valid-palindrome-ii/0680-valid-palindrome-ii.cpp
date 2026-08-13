class Solution {
public:
    bool isPal(string s,int st,int end){
        while(st<end){
            if(s[st]!=s[end])return false;
            st++;
            end--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            
            }
            else{
                return isPal(s,i+1,j) || isPal(s,i,j-1);
            }
        }
        return true;
    }
};