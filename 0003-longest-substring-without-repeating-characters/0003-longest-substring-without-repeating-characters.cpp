class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int llen=INT_MAX,glen=0;
        set<char> fre;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(fre.find(s[i])==fre.end()){
                fre.insert(s[i]);
            }
            else{
                while(j<s.size() && fre.find(s[i])!=fre.end()){
                    fre.erase(s[j++]);
                }
                fre.insert(s[i]);
            }
            glen=max(glen,int(fre.size()));

        }
        return glen;
    }
};