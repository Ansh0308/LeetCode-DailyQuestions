class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int gsum=INT_MIN;
        int lsum=0;
        for(int ele:nums){
            lsum=max(ele,lsum+ele);
            gsum=max(gsum,lsum);
        }
        return gsum;
        
    }
};