class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        int gArea=INT_MIN;
        while(left<right){
            int cArea=(right-left)*min(nums[left],nums[right]);
            gArea=max(gArea,cArea);
            if(nums[left]>nums[right])right--;
            else{
                left++;
            }

        }
        return gArea;
        
    }
};