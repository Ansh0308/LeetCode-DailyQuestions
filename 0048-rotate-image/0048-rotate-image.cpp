class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
        int n=nums.size();
        vector<vector<int>> temp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp[i][j]=nums[i][j];

            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                nums[i][j]=temp[n-j-1][i];
                
            }
        }
        
    }
};