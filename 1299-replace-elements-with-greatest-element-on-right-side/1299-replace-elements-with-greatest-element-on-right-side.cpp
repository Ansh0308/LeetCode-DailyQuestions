class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int maxe=-1;
        vector<int> ans(n);
        for(int i=arr.size()-1;i>=0;i--){
          
            ans[i]=maxe;
            maxe=max(maxe,arr[i]);
        }
        return ans;
    }
};