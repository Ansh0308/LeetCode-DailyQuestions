class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int m=nums.size(),n=nums[0].size();
        int start=0,end=m-1;
        int row=-1;
        while(start<=end){
            int mid=end+(start-end)/2;
            if(nums[mid][0]<=target && nums[mid][n-1]>=target){
                row=mid;
                break;
            }
            else if(target<nums[mid][0]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        if(row==-1)return false;
        start=0,end=n-1;
        while(start<=end){
            int mid=end+(start-end)/2;
            if(nums[row][mid]==target)return true;
            else if(nums[row][mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;            }
        }
        return false;
        
    }
};