class Solution {
public:
    void helper(vector<int>& nums,vector<vector<int>>& ans,vector<int> c={},int index=0){
        if(index==nums.size()){
            ans.push_back({c});
            return;
        }
        
        
            //include
            c.push_back(nums[index]);
            helper(nums,ans,c,index+1);
            //exclude
            c.pop_back();
            
            
            int i=index+1;
            while(i<nums.size() && nums[i]==nums[i-1])i++;
            helper(nums,ans,c,i);
        
            
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        helper(nums,ans);
        return ans;
        
    }
};