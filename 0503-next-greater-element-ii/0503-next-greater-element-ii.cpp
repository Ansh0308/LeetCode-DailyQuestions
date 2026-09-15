class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        // for(int i=0;i<n-1;i++){
        //     nums.push_back(nums[i]);
        // }
        // vector<int> ans(n,-1);
        // stack<int> st;
        // for(int i=0;i<nums.size();i++){
        //     while(!st.empty() && nums[st.top()]<nums[i]){
        //         int idx=st.top();
        //         st.pop();
        //         ans[idx%n]=nums[i];
        //     }
        //     st.push(i);
        // }
        vector<int> ans(n,-1);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]<nums[i]){
                int idx=st.top();
                st.pop();
                ans[idx]=nums[i];
            }
            st.push(i);
        }
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]<nums[i]){
                int idx=st.top();
                st.pop();
                ans[idx]=nums[i];
            }
            st.push(i);
        }
        return ans;
    }
};