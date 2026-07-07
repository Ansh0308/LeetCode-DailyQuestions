class Solution {
public:
    int alternateDigitSum(int n) {
        int co=0;
        int temp=n;
        while(temp!=0){
            co++;
            temp/=10;

            
        }
        temp=0;
        for(int i=co-1;i>=0 && n!=0;i--){
            if(i%2==0){
                temp+=n%10;
            }
            else{
                temp-=n%10;
            }
            n/=10;
        }
        return temp;
    }
};