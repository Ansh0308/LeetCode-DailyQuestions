class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=1;
        int ans=INT_MIN;
        for(int ele:nums){
            if(ele!=1)count=0;
            ans=max(ans,count);
            count++;
        }
        return ans;
    }
};