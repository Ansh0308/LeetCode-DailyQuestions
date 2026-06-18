class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int r=0,l=0,sum=0;
        int ans=INT_MAX;
        while(r<n){
            sum+=nums[r++];
            while(l<n && sum>=target){
                ans=min(ans,r-l);
                sum-=nums[l++];
            }
        }
        return (ans==INT_MAX)?0:ans;
        
    }
};