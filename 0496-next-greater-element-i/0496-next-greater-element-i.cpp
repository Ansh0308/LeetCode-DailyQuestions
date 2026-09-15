class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int> st;
        unordered_map<int,int> mp;
        for(int ele:nums2){
            mp[ele]=-1;
        }
        for(int i=0;i<n;i++){
            while(!st.empty() && nums2[st.top()]<nums2[i]){
                int idx=st.top();
                st.pop();
                mp[nums2[idx]]=nums2[i];
            }
            st.push(i);
        }
        for(int i=0;i<nums1.size();i++){
            nums1[i]=mp[nums1[i]];
        }
        return nums1;
        
    }
};