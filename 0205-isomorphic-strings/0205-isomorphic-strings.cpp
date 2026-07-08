class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,char> mp;
        unordered_set<char> keys;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end() && mp[s[i]]!=t[i])return false;
            if(mp.find(s[i])==mp.end() && keys.find(t[i])!=keys.end())return false;
            mp[s[i]]=t[i];
            keys.insert(t[i]);
        }
        return true;

        
    }
};