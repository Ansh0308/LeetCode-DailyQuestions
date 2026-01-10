class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> maps;
        for(string ele:strs){
            string key=ele;
            sort(key.begin(),key.end());
            maps[key].push_back(ele);
        }
        for(auto it:maps){
            ans.push_back(it.second);
        }
        return ans;
        
    }
};