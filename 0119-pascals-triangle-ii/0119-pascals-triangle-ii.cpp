class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex+1,1);
        for(int i=0;i<=rowIndex;i++){
            vector<int> temp=row;
            for(int j=1;j<i;j++){
                row[j]=temp[j]+temp[j-1];

            }
        }
        return row;
        
    }
};