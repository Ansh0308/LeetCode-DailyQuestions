class Solution {
public:
    int memo_help(vector<vector<int>>& grid,vector<vector<int>>& memo,int i,int j){
        if(memo[i][j]!=-1)return memo[i][j];
        if(i==0){
            return grid[i][j]+memo_help(grid,memo,i,j-1);
        }
        if(j==0){
            return grid[i][j]+memo_help(grid,memo,i-1,j);
        }
        return memo[i][j]=grid[i][j]+min(memo_help(grid,memo,i,j-1),memo_help(grid,memo,i-1,j));
    }
    int memo(vector<vector<int>>& grid){
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> memo(m,vector<int>(n,-1));
        memo[0][0]=grid[0][0];
        return memo_help(grid,memo,m-1,n-1);

    }
    int recu(vector<vector<int>>& grid,int i,int j){
        if(i==0 && j==0)return grid[0][0];
        if(i==0){
            return grid[i][j]+recu(grid,i,j-1);
        }
        if(j==0){
            return grid[i][j]+recu(grid,i-1,j);
        }
        return grid[i][j]+min(recu(grid,i,j-1),recu(grid,i-1,j));

    }

    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        return memo(grid);
        
    }
};