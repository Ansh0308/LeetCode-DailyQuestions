class Solution {
public:
void helper(vector<int>& nums,int target,vector<vector<int>>& ans,int index=0,int sum=0,vector<int> temp={}){
    if(sum==target){
    ans.push_back(temp);
    return;
}
if(index==nums.size() || sum>target){
    
    return;
}

//recursion
temp.push_back(nums[index]);
helper(nums,target,ans,index,sum+nums[index],temp);
temp.pop_back();
helper(nums,target,ans,index+1,sum,temp);



}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        helper(nums,target,ans);
        return ans;
        
    }
};