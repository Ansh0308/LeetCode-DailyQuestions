class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int> freq(26,0);
        for(char ele :s){
            freq[ele-'a']++;
        }
        for(char ele:t){
            freq[ele-'a']--;
            if(freq[ele-'a']<0)return false;
        }
        
        return true;
    }
};