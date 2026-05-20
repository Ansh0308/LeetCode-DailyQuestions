class Solution {
public:
    double myPow(double x, int n) {
        long bi=n;
        double ans=1;
        if(n<0){
            bi=bi*-1;
            x=1/x;
        }
        while(bi!=0){
            if(bi%2==1){
                ans*=x;
            }
            x*=x;
            bi/=2;
        }
        return ans;
        
        
    }
};