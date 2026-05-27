class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> st;
        vector<int> ans;
        for(int ele:nums){
            if(st.find(ele)!=st.end()){
                ans.push_back(ele);
            }
            st.insert(ele);
        }
        return ans;
    }
};