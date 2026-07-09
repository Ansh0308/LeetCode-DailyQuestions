class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int minP=nums[0],maxP=0;
        for(int i=1;i<nums.size();i++){
            maxP=max(maxP,nums[i]-minP);
            minP=min(minP,nums[i]);
        }
        return maxP;
        
    }
};