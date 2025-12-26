class Solution {
public:
    int maxArea(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        int larea=0,garea=INT_MIN;
        while(left<right){
            int width=right-left;
            int height=min(nums[left],nums[right]);
            larea=width*height;
            garea=max(garea,larea);
            if(nums[left]>nums[right])right--;
            else{
                left++;
            }
        }
        return garea;
        
    }
};