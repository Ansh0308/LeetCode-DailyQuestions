class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1,ans=INT_MIN;
        while(i<j){
            int height=min(nums[i],nums[j]);
            int width=j-i;
            ans=max(ans,height*width);
            if(nums[i]<nums[j])i++;
            else{
                j--;
            }
        }
        return ans;
        
    }
};