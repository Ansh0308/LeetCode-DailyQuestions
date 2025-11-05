class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, char digit) {
        // Row & Column
        for(int i = 0; i < 9; i++) {
            if(board[row][i] == digit) return false;
            if(board[i][col] == digit) return false;
        }

        // 3x3 grid
        int sr = (row/3)*3;
        int sc = (col/3)*3;
        for(int i = sr; i < sr+3; i++) {
            for(int j = sc; j < sc+3; j++) {
                if(board[i][j] == digit) return false;
            }
        }
        return true;
    }

    bool solver(vector<vector<char>>& board, int row, int col) {
        if(row == 9) return true;    // solved fully
        
        if(col == 9) return solver(board, row+1, 0);

        if(board[row][col] != '.') 
            return solver(board, row, col+1);

        for(char d = '1'; d <= '9'; d++) {
            if(isSafe(board, row, col, d)) {
                board[row][col] = d;
                if(solver(board, row, col+1)) return true;
                board[row][col] = '.';
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solver(board, 0, 0);
    }
};
