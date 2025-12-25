class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int lsum=nums[0],gsum=INT_MIN;
        for(int i=1;i<nums.size();i++){
            gsum=max(gsum,lsum);
            lsum=max(nums[i],lsum+nums[i]);
            
        }
        gsum=max(gsum,lsum);
        return gsum;
        
    }
};