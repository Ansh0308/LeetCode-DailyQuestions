class Solution {
public:

    int maxProduct(vector<int>& nums) {
       int maxPro=nums[0],minPro=nums[0];
       int ans=maxPro;
       for(int i=1;i<nums.size();i++){
        if(nums[i]<0){
            swap(maxPro,minPro);
        }
        maxPro=max(maxPro*nums[i],nums[i]);
        minPro=min(minPro*nums[i],nums[i]);
        ans=max(ans,maxPro);
       }
       return ans;
    }
};