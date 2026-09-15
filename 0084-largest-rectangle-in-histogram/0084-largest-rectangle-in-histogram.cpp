class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n,-1),right(n,n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>nums[i]){
                int idx=st.top();
                st.pop();
                right[idx]=i;
            }
        st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i=n-1;i>=0;i--){
             while(!st.empty() && nums[st.top()]>nums[i]){
                int idx=st.top();
                st.pop();
                left[idx]=i;
            }

            st.push(i);
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(ans,nums[i]*(right[i]-left[i]-1));
        }
        return ans;
    }
};