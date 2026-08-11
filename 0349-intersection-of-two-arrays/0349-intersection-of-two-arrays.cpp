class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st(nums1.begin(), nums1.end()),ans;
    

        for (int x : nums2) {
            if (st.count(x)) {
                ans.insert(x);
                // st.erase(x);   // prevents duplicates
            }
        }

        return {ans.begin(),ans.end()};
    }
};