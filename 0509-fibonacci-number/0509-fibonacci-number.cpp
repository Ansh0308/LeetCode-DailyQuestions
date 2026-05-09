class Solution {
public:
    int helper(int n,int a=0,int b=1){
        if(n==0)return a;
        else if(n==1)return b;
        
        int c=a+b;
        return helper(n-1,b,c);
    }
    int fib(int n) {
        return helper(n);
    }
    
};