class Solution {
public:
    void helper(string &s,
                vector<string> &ans,
                unordered_map<char,vector<char>> &mapping,
                int index = 0,
                string temp = "") {
        if(index >= s.size()){
            ans.push_back(temp);
            return;
        }
        
        for(char ele : mapping[s[index]]){
            helper(s, ans, mapping, index + 1, temp + ele);
        }
    }

    vector<string> letterCombinations(string s) {
        unordered_map<char,vector<char>> mapping;
        char ele = 'a';

        for(char i = '2'; i <= '9'; i++){
            int cnt = 3;
            if(i == '7' || i == '9') cnt = 4;

            for(int j = 0; j < cnt; j++){
                mapping[i].push_back(ele);
                ele++;
            }
        }

        vector<string> ans;
        helper(s, ans, mapping);
        return ans;
    }
};
