class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //prefix 
        int n=nums.size();
        vector<int> ans(n,1);
        //prefix
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        //sufix
        int p=nums[n-1];
        for(int i=n-2;i>=0;i--){
            ans[i]=ans[i]*p;
            p=p*nums[i];
        }
        return ans;
        
    }
};