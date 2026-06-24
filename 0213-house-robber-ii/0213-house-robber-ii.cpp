class Solution {
public:
    int memo_helper(vector<int>& nums,vector<int>& memo,int i,int end){
        if(i<end)return 0;
        if(i<0)return 0;
        if(memo[i]!=-1)return memo[i];
        return memo[i]=max(memo_helper(nums,memo,i-1,end),nums[i]+memo_helper(nums,memo,i-2,end));

    }
    int memo(vector<int>& nums,int st,int end){
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int> memo(n,-1);
        memo[st]=nums[st];
        return memo_helper(nums,memo,end,st);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        return max(memo(nums,1,n-1),memo(nums,0,n-2));
        
    }
};