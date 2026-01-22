class Solution {
public:
    void helper(vector<string>& ans,string s,int open,int close){
        if(open==0 && close==0){
            ans.push_back(s);
            return;
        }
        if(open==close){
            helper(ans,s+'(',open-1,close);
        }
        else if(open==0){
            helper(ans,s+')',open,close-1);
        }
        // else if(close==0){
        //     helper(ans,s+'(',open-1,close);
        // }
        else{
            helper(ans,s+'(',open-1,close);
            helper(ans,s+')',open,close-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";
        helper(ans,s,n,n);
        return ans;
        
    }
};