class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size(),m=t.size();
        if(n!=m)return false;
        unordered_map<int,int> mp;
        unordered_set<int> keys;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end() && mp[s[i]]!=t[i])return false;
            if(keys.find(t[i])!=keys.end() && mp.find(s[i])==mp.end())return false;
            mp[s[i]]=t[i];
            keys.insert(t[i]);

        }
        return true;
    }
};