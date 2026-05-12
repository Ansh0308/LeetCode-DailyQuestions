class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        
        int p1=m-1,p2=n-1,p=m+n-1;
        while(p1>=0 && p2>=0 && p>=0){
            if(num1[p1]>num2[p2])num1[p--]=num1[p1--];
            else{
                num1[p--]=num2[p2--];
            }
        }
        while(p1>=0 && p>=0){
            num1[p--]=num1[p1--];
        }
        while(p2>=0 && p>=0){
            num1[p--]=num2[p2--];
        }
    }
};