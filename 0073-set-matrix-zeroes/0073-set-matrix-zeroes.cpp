class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int r=arr.size(),c=arr[0].size();
        unordered_set<int> rows;
        unordered_set<int> cols;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(arr[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(int row:rows){
            for(int j=0;j<c;j++){
                arr[row][j]=0;
            }
        }
        for(int col:cols){
            for(int i=0;i<r;i++){
                arr[i][col]=0;
            }
        }
        
    }
};