class Solution {
public:
    int memo_helper(vector<vector<int>>& nums,vector<vector<int>>& memo,int i,int j){
        if(i<0 || j<0)return 0;
        if(memo[i][j]!=-1)return memo[i][j];
        if(nums[i][j]==1)return 0;
        return memo[i][j]=memo_helper(nums,memo,i-1,j)+memo_helper(nums,memo,i,j-1);
    }
    int memo(vector<vector<int>>& nums){
        int m=nums.size(),n=nums[0].size();
        if(m==1 && n==1){
            if(nums[0][0]==1)return 0;
        }
        if(nums[0][0]==1)return 0;
        vector<vector<int>> memo(m,vector<int>(n,-1));
        memo[0][0]=1;
        return memo_helper(nums,memo,m-1,n-1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        return memo(nums);
        
    }
};