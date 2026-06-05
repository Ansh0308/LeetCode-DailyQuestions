class Solution {
public:
    void helper(vector<string>& ans,string curr,int n,int open,int close){
        if(open==0 && close==0){
            ans.push_back(curr);
            return;
        }
        if(open==close){
            helper(ans,curr+'(',n,open-1,close);
        }
        else if(open==0){
            helper(ans,curr+')',n,open,close-1);
        }
        else{
            helper(ans,curr+'(',n,open-1,close);
            helper(ans,curr+')',n,open,close-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(ans,"",n,n,n);
        return ans;
    }
};