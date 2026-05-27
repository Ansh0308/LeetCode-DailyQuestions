class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0;
        int i=0,j=0;
        unordered_set<char> st;
        for(int i=0;i<n;i++){
            if(st.find(s[i])==st.end()){
                st.insert(s[i]);
            }
            else{
                while(j<n&&j<i &&st.find(s[i])!=st.end()){
                    st.erase(s[j]);
                    j++;
                }
                st.insert(s[i]);
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};