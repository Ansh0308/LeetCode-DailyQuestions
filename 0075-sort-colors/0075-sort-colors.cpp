class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int st=0,mid=0,end=n-1;
        while(mid<=end && st<=end){
            if(nums[mid]==2){
                swap(nums[end--],nums[mid]);
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid++],nums[st++]);
            }
        }
        return ;
        
    }
};