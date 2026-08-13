class Solution {
public:
    bool isPalindrome(string s) {
        string cleaner="";
        for(char ele:s){
            if(isalnum(ele)){
                cleaner+=tolower(ele);
            }
        }
        int i=0,j=cleaner.size()-1;
        while(i<j){
            if(cleaner[i]!=cleaner[j])return false;
            i++;
            j--;
        }
        return true;

        
    }
};