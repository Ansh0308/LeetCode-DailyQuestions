class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(vector<int> ele:nums){
            if(ans.size()==0){
                ans.push_back(ele);
                continue;
            }
            if(ans[ans.size()-1][1]>=ele[0] && ans[ans.size()-1][1]>=ele[1])continue;
            if(ans[ans.size()-1][1]>=ele[0]){
                ans[ans.size()-1][1]=ele[1];
            }
            else{
                ans.push_back(ele);
            }
        }
        return ans;
        
    }
};