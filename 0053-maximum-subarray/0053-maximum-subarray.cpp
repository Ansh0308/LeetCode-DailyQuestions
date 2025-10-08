class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int GlobalMax=INT_MIN,currentSum=0;
        for(int ele : nums){
            currentSum=max(ele,currentSum+ele);
            GlobalMax=max(GlobalMax,currentSum);
        }
        return GlobalMax;
        
    }
};