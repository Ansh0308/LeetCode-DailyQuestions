class Solution {
public:
    string minWindow(string s, string t) {
        int sSize=s.size(),tSize=t.size();
        int l=0,r=0,cnt=0;
        int minLen=INT_MAX,sIndex=-1;
        unordered_map<char,int> freq;
        for(char ele:t)freq[ele]++;
        while(r<sSize){
            if(freq[s[r]]>0){
                cnt++;
                
            }
            freq[s[r]]--;
            while(cnt==tSize){
                if(r-l+1<minLen){
                    minLen=r-l+1;
                    sIndex=l;
                }
                freq[s[l]]++;
                if(freq[s[l]]>0)cnt--;
                l++;

            }
            r++;

        }
        return sIndex == -1 ? "" : s.substr(sIndex, minLen);
        
    }
};