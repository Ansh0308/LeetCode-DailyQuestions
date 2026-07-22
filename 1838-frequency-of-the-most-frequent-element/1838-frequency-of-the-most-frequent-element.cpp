class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
       int right=0,left=0;
       long long sum=0;
       int ans=-1;
       while(right<n){
        sum+=nums[right];
    while((long long)nums[right]*(right-left+1)-sum>k){
        sum-=nums[left++];
    }
        ans=max(ans,right-left+1);
        right++;
       }
        return ans;
        
    }
};