class Solution {
public:
    void helper(vector<int>& nums,vector<vector<int>> &ans,int index=0,vector<int> curr={}){
        if(index==nums.size()){
            ans.push_back(curr);
            return;
        }
        //include 
        curr.push_back(nums[index]);
        helper(nums,ans,index+1,curr);
        //exclude
        curr.pop_back();
        helper(nums,ans,index+1,curr);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(nums,ans);
        return ans;
        
    }
};