class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> mul(n,1);
        //pre
        for(int i=1;i<n;i++){
            mul[i]=mul[i-1]*nums[i-1];
         }
        int pro=1;
        int nu=nums[n-1];
         for(int i=n-2;i>=0;i--){
            mul[i]*=pro*nu;
            pro*=nums[i+1];
            nu=nums[i];
         }
        return mul;
        
    }
};