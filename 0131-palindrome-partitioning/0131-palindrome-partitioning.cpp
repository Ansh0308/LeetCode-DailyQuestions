class Solution {
public:
bool isPal(string s){
    if(s.size()==1)return true;
    string s2=s;
    reverse(s2.begin(),s2.end());
    return (s2==s)?true:false;
}
    void helper(string s,vector<vector<string>>& ans,vector<string> temp={}){
        if(s.size()==0){
            ans.push_back(temp);
            return;
        }
        //include becomes palindrome
       for(int i=0;i<s.size();i++){ //making cuts in every part
        string part=s.substr(0,i+1);
        if(isPal(part)){
            temp.push_back(part);
            helper(s.substr(i+1),ans,temp);
            temp.pop_back();
        }
        
        
        }
        
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        helper(s,ans);
        return ans;
        
    }
};