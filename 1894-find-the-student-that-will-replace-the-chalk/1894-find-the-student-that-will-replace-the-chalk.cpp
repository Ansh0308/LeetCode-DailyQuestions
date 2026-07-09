class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {

        int n=chalk.size();
        if(n==1)return 0;
        long long total=0;
        for(int ele:chalk){
            total+=ele;
        }
        k%=total;
        for(int i=0;k>=0;i++){
            i=i%n;
            k-=chalk[i];
            if(k<=0){
                return(k==0)?(i+1)%n:i%n;
            };
        }
        return 0;
    }
};