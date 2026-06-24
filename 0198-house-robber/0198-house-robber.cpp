class Solution {
public:
    int rec(vector<int>& nums,int i,int sum){
        if(i<0)return sum;
        return max(rec(nums,i-2,sum+nums[i]),rec(nums,i-1,sum));

    }
    int memo_help(vector<int>& nums,vector<int>& memo,int i){
        if(memo[i]!=-1)return memo[i];
        return memo[i]=max(memo_help(nums,memo,i-1),nums[i]+memo_help(nums,memo,i-2));
    }
    int memo(vector<int>& nums){
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int> memo(n,-1);
        memo[0]=nums[0];
        memo[1]=max(nums[0],nums[1]);
        return memo_help(nums,memo,n-1);

    }
    int rob(vector<int>& nums) {
        int n=nums.size();

        return memo(nums);
        
    }
};