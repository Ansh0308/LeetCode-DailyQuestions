class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=1;
        for(int ele:nums){
            if(ele<=0)continue;
            if(ele!=start)return start;
            start++;
        }
        return start;
    }
};