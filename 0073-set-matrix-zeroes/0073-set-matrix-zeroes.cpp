class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int m=nums.size(),n=nums[0].size();
        unordered_set<int> rows,cols;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(nums[i][j]==0){
                rows.insert(i);
                cols.insert(j);}
            }
        }
        for(int ele : rows){
            for(int j=0;j<n;j++){
                nums[ele][j]=0;
            }
        }
        for(int ele:cols){
            for(int i=0;i<m;i++){
                nums[i][ele]=0;
            }
        }
    }
};