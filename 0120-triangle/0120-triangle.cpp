class Solution {
public:
    int memo_helper(vector<vector<int>>& nums,vector<vector<int>>& memo,int i,int j){
        if(memo[i][j]!=INT_MAX)return memo[i][j];
        if(i==j)return memo[i][j]=nums[i][j]+memo_helper(nums,memo,i-1,j-1);
        if(j==0)return memo[i][j]=nums[i][j]+memo_helper(nums,memo,i-1,j);
        return memo[i][j]=nums[i][j]+min(memo_helper(nums,memo,i-1,j-1),memo_helper(nums,memo,i-1,j));

    }
    int memo(vector<vector<int>>& nums){
        int n=nums.size();
        vector<vector<int>> memo(n,vector<int>(n,INT_MAX));
        memo[0][0]=nums[0][0];
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            ans=min(ans,memo_helper(nums,memo,n-1,i));

        }
        return ans;
    } 
    int minimumTotal(vector<vector<int>>& triangle) {
        
        return memo(triangle);
    }
};