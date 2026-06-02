class Solution {
public:
    bool isSafe(vector<string>& board,int n,int row,int col){
        //vertical
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q')return false;
        }
        //horizontal
        for(int i=0;i<n;i++){
            if(board[row][i]=='Q')return false;
        }
        //left
        for(int i=row,j=col;i>=0 && j>=0 ;i--,j--){
            if(board[i][j]=='Q')return false;

        }
        //right
        for(int i=row,j=col;i>=0 && j<n ;i--,j++){
            if(board[i][j]=='Q')return false;

        }
        return true;


    }
    void helper( vector<vector<string>>& ans,vector<string>& board,int n,int row)
{
    if(row==n){
        ans.push_back(board);
        return;
    }
    for(int i=0;i<n;i++){
        if(isSafe(board,n,row,i)){
            board[row][i]='Q';
            helper(ans,board,n,row+1);
            board[row][i]='.';

        }
    }
}    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));
        helper(ans,board,n,0);
        return ans;
        
    }
};