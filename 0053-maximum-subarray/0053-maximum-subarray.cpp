class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int gMax=INT_MIN,lMax=0;
        for(int ele :nums){
            lMax=max(ele,lMax+ele);
            gMax=max(gMax,lMax);
        }
        return gMax;
        
    }
};