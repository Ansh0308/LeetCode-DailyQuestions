class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
      int minPro=nums[0],maxPro=nums[0];
      int ans=INT_MIN;
      for(int i=1;i<nums.size();i++){
        ans=max(maxPro,ans); 
        if(nums[i]<0){
            swap(maxPro,minPro);
        }
        
        maxPro=max(nums[i],nums[i]*maxPro);
        minPro=min(nums[i],nums[i]*minPro);
        
        
      }
      ans=max(maxPro,ans); 
      return ans;
    }
};