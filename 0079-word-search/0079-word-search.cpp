class Solution {
public:
    bool helper(vector<vector<char>>& board, string& word,int i,int j,int idx){
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || idx>=word.size())return false;
        if(board[i][j]!=word[idx])return false;
        if(idx==word.size()-1)return board[i][j]==word[idx];
        char temp=board[i][j];
        board[i][j]='#';
        bool Df=helper(board,word,i-1,j,idx+1);
        bool Ds=helper(board,word,i,j+1,idx+1);
        bool Dt=helper(board,word,i+1,j,idx+1);
        bool Dfo=helper(board,word,i,j-1,idx+1);
        board[i][j]=temp;

        
        return Df||Ds||Dt||Dfo;

    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    if(helper(board,word,i,j,0))return true;
                }
            }
        }
        return false;
    }
};