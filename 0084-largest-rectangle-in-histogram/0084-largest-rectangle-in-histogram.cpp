class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        if(arr.size()==1)return arr[0];
        int ans=0;
        vector<int> rightSmaller(arr.size(),-1);
        vector<int> leftSmaller(arr.size(),-1);
        stack<int> st;
       
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty()){
                if(arr[st.top()]<arr[i]){
                    rightSmaller[i]=st.top();
                    break;
                }
                st.pop();
            }
            if(st.empty())rightSmaller[i]=arr.size();
            st.push(i);

        }
        while(!st.empty()){
            st.pop();
        }
        for(int i=0;i<arr.size();i++){
            while(!st.empty()){
                if(arr[st.top()]<arr[i]){
                    leftSmaller[i]=st.top();
                    break;
                }
                st.pop();
            }
            if(st.empty())leftSmaller[i]=-1;
            st.push(i);

        }
        for(int i=0;i<arr.size();i++){
            int width=rightSmaller[i]-leftSmaller[i]-1;
            ans=max(ans,arr[i]*width);
        }
        return ans;
    }
};