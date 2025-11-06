class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
    
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(vector<int> range : intervals){
            if(ans.size()==0){
                ans.push_back(range);
                continue;
            }
            else if(ans[ans.size()-1][1]>range[1])continue;
            else if(ans[ans.size()-1][1]>=range[0]){
                ans[ans.size()-1][1]=range[1];

            }
            else{
                ans.push_back(range);
            }

        }
        return ans;

        
    }
};