class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int lSum=0,gSum=INT_MIN;
        for(int ele:nums){
            lSum=max(ele,ele+lSum);
            gSum=max(gSum,lSum);
        }
        return gSum;
        
    }
};