class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cSum=0,gSum=INT_MIN;
        for(int ele : nums){
            cSum=max(ele,cSum+ele);
            gSum=max(gSum,cSum);
        }
        return gSum;
        
    }
};