class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned="";
        for(char ele:s){
            if(isalnum(ele)){
                cleaned+=tolower(ele);
            }
        }
        string rev=cleaned;
        reverse(rev.begin(),rev.end());
        return rev==cleaned;

        
    }
};