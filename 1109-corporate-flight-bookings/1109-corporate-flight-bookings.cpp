class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n+1,0);
        for(vector<int> flight:bookings){
            ans[flight[0]-1]+=flight[2];
            ans[flight[1]]-=flight[2];
        }
        for(int i=1;i<ans.size();i++){
            ans[i]+=ans[i-1];
        }
        return {ans.begin(),ans.end()-1};
        
    }
};