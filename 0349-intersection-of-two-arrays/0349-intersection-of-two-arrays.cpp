class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        unordered_set<int> ans;
        for(int ele:nums1){
            st.insert(ele);
        }
        for(int ele :nums2){
            if(st.find(ele)!=st.end()){
                ans.insert(ele);
            }
        }
        return {ans.begin(),ans.end()};

        
    }
};