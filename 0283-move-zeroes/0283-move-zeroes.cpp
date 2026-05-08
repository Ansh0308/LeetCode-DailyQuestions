class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int zero = nums.size();
        int nonZ = 0;

        for (int i = 0; i < zero; i++) {
            if(nums[i]!=0){
                swap(nums[i],nums[nonZ++]);
            }
        }

            
    }
};