class Solution {
public:
    void reverse(vector<int>& nums,int start,int end){
        while(start<=end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1)return;
        int n=nums.size();
        // for(int i=0;i<k;i++){
        //     rotate_one(nums);
        // }
       k%=n;
       reverse(nums,0,n-1);
       reverse(nums,0,k-1);
       reverse(nums,k,n-1);


        
    }
};