class Solution {
public:
    int helper(int m,int n,int currm,int currn,vector<vector<int>>& dp ){
        if(currn>=n || currn<0 || currm>=m || currm<0)return 0;
        if(currm==m-1 && currn==n-1)return 1;
        return (dp[currm][currn]!=-1)?dp[currm][currn]:dp[currm][currn]=helper(m,n,currm+1,currn,dp)+helper(m,n,currm,currn+1,dp);


    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return helper(m,n,0,0,dp);
        
    }
};