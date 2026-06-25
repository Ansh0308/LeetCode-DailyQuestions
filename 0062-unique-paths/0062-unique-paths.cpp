class Solution {
public:
    int memo_help(vector<vector<int>> &memo,int i,int j){
        if(i<0 || j<0)return 0;
        if(memo[i][j]!=0)return memo[i][j];
    
        

        return memo[i][j]= memo_help(memo,i-1,j)+memo_help(memo,i,j-1);
    }
    int memo_f(int m, int n){
        vector<vector<int>> memo(m,vector<int> (n,0));
        memo[0][0]=1;
        return memo_help(memo,m-1,n-1);

    }
    int uniquePaths(int m, int n) {
        return memo_f(m,n);
        
    }
};