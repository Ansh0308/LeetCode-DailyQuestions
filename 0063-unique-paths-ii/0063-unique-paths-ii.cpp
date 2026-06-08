class Solution {
public:
    int helper(vector<vector<int>>& nums,vector<vector<int>>& dp,int i,int j){
        if(i>=nums.size() || j>=nums[0].size())return 0;
        if(nums[i][j]==1)return 0;
        if(i==nums.size()-1 && j==nums[0].size()-1)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        return dp[i][j]=helper(nums,dp,i+1,j)+helper(nums,dp,i,j+1);

    }
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        int n=nums.size(),m=nums[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return helper(nums,dp,0,0);
        
    }
};