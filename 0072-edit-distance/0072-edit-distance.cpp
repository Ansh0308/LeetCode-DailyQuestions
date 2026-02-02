class Solution {
public:
    int helper(string &first,string &second,int i,int j,vector<vector<int>> &dp){
        if(j<0){
            return i+1;
        }
        if(i<0){
            return j+1;

        }
        if(dp[i][j]!=-1)return dp[i][j];
        if(first[i]==second[j])return dp[i][j]=helper(first,second,i-1,j-1,dp);
        int in=helper(first,second,i,j-1,dp)+1;
        int del=helper(first,second,i-1,j,dp)+1;
        int re=helper(first,second,i-1,j-1,dp)+1;
        return dp[i][j]=min(min(in,del),re);
    }
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return helper(word1,word2,word1.size()-1,word2.size()-1,dp);
     
    }
};