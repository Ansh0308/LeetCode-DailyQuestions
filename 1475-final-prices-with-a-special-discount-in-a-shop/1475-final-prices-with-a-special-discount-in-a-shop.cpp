class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n,-1);
        stack<int> st;

        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                int idx=st.top();
                st.pop();
                ans[idx]=arr[idx]-arr[i];
            }
            st.push(i);
        }
        for(int i=0;i<n;i++){
            if(ans[i]==-1)ans[i]=arr[i];
        }
        return ans;
        
    }
};