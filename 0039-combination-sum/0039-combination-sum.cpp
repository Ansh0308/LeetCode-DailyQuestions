class Solution {
public:
    void helper(vector<int>& nums, int target,vector<vector<int>> & ans,vector<int> curr,int sum,int idx){
        if(sum==target){
            ans.push_back(curr);
            return;
        }
        if(idx>=nums.size() || sum>target)return;
        curr.push_back(nums[idx]);
        helper(nums,target,ans,curr,sum+nums[idx],idx);
        curr.pop_back();
        helper(nums,target,ans,curr,sum,idx+1);

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        helper(nums,target,ans,{},0,0);
        return ans;
        
    }
};