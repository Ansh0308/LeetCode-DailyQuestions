class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        int pos=n-1;
        vector<int> ans(n);
        while(left<=right && pos>=0){
            int one=nums[left]*nums[left],two=nums[right]*nums[right];
            if(one>two){
                ans[pos--]=one;
                left++;
            }
            else{
                ans[pos--]=two;
                right--;
            }
        }
        return ans;

        
    }
};