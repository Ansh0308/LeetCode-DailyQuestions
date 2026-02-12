class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        int maxele=0;
        for(int i=0;i<n;i++){
            if(nums[maxele]<nums[i]){
                maxele=i;
            }
        }
        vector<int> ans(n,-1);
        stack<int> st;
        st.push(maxele);
        for(int i=maxele-1;i!=maxele;i--){
            if(i<0)i=n-1;
            if(i==maxele)break;
            while(!st.empty()){
                if(nums[st.top()]>nums[i]){
                    ans[i]=nums[st.top()];
                    break;
                }
                st.pop();
            }
            if(st.empty())ans[i]=-1;
            st.push(i);

        }
        return ans;
         

        
    }
};