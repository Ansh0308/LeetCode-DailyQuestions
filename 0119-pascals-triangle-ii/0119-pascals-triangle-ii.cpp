class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        long long curr=1;
        for(int i=0;i<=rowIndex;i++){
            row.push_back(curr);
            curr=curr*(rowIndex-i)/(i+1);
            
        }
        return row;
        
    }
};