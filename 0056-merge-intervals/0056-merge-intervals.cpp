class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(vector<int> range:nums){
            if(ans.size()==0){
                ans.push_back(range);
                continue;
            }
            else if(ans[ans.size()-1][1]>range[1]){
                continue;
            }
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