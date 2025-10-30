class Solution {
public:
    int search_help(vector<int> &nums,int tar,int left,int right){
        //base case
        if(left>right)return -1;
        //recursive call
        int mid =left + (right-left)/2;
        if(nums[mid]==tar)return mid;
        if(nums[mid]<tar)return search_help(nums,tar,mid+1,right);
        return search_help(nums,tar,left,mid-1);
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return search_help(nums,target,0,n-1);
    }
};