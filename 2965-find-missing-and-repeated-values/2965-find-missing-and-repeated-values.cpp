class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        unordered_set<int> se;
        long long actSum=0;
        int a=-1,b=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int num=grid[i][j];
                if(se.find(num)!=se.end()){
                    a=num;
                }
                se.insert(num);
                actSum+=num;
            }
        }
        long long maxV=n*n;
        long long expSum=maxV*(maxV+1)/2;
        actSum-=a;
        b=expSum-actSum;
        return{a,b};

        
    }
};