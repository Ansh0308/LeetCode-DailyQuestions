class Solution {
public:

    int climbStairs(int n) {
        if(n == 1) return 1;
        // vector<int> ways(n+1);
        // ways[1]=1;
        // ways[2]=2;
        int prev=1,curr=2;
        for(int i=3;i<=n;i++){
            int temp=prev+curr;
            prev=curr;
            curr=temp;
        }
        return curr;
        
    }
};