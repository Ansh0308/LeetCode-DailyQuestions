class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(vector<int> ele:intervals){
            if(ans.empty() || ans.back()[1]<ele[0]){
                ans.push_back(ele);
            
            }
            else{
                ans.back()[1]=max(ans.back()[1],ele[1]);
            }
        }


        return ans;
    }
};