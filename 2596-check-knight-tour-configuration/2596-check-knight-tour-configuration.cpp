class Solution {
public:

    bool isValid(vector<vector<int>>& grid,int row,int col,int next,int n){
        //base case
        
        if(row>=n || col>=n)return false;
        if(row<0 || col<0)return false;
        if(grid[row][col]!=next)return false;
        if(grid[row][col]==n*n-1 && next==n*n-1)return true;
        //moves
        bool ans=isValid(grid,row-2,col+1,next+1,n) || isValid(grid,row-2,col-1,next+1,n) || isValid(grid,row-1,col+2,next+1,n)|| isValid(grid,row+1,col+2,next+1,n)|| isValid(grid,row+2,col+1,next+1,n)|| isValid(grid,row+2,col-1,next+1,n)|| isValid(grid,row+1,col-2,next+1,n)|| isValid(grid,row-1,col-2,next+1,n) ;

        return ans;

    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        return isValid(grid,0,0,0,grid.size());
        
    }
};