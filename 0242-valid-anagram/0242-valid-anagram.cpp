class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int> frq(26,0);
        for(char ele : s){
            frq[ele-'a']++;
        }
        for(char ele:t){
            int idx=ele-'a';
            frq[idx]--;
            if(frq[idx]<0)return false;
        }
        for(int ele:frq){
            if(ele!=0)return false;
        }
        return true;
        
    }
};