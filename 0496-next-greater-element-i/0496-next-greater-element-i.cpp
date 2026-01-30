class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mapping;
        stack<int> st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty()){
                if(st.top()>nums2[i]){
                    mapping[nums2[i]]=st.top();
                    break;
                }
                st.pop();
            }
            if(st.empty()){
                mapping[nums2[i]]=-1;

            }
            st.push(nums2[i]);

        }
        vector<int> ans;
        for(int ele:nums1){
            ans.push_back(mapping[ele]);
        }
        return ans;
        
    }
};