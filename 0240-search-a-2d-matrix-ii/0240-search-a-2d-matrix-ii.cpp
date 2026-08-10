class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m=arr.size(),n=arr[0].size();
        if(m==1 && n==1){
            return (arr[0][0]==target)?true:false;
        }
        
        int row=0,col=n-1;
        while(row<=m-1 && col>=0){
            if(arr[row][col]==target)return true;
            if(arr[row][col]>target){
                col--; 
            }
            else if(arr[row][col]<target){
                row++; 
            }

        }
        return false;
        
    }
};