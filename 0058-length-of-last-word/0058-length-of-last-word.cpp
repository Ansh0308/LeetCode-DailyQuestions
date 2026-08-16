class Solution {
public:
    int lengthOfLastWord(string s) {
        bool started=false;
        string ans="";
        for(int i=s.size()-1;i>=0 ;i--){
            char ele=s[i];
            if(ele==' ' && !started)continue;
            if(ele==' ')break;
            if(ele!=' '){
                started=true;
            }
            ans+=ele;

        }
        return ans.size();
    }
};