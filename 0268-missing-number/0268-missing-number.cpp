
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum_1=0;
        for(int i=0;i<=nums.size();i++){
            sum_1^=i;
        }
        for(int i=0;i<nums.size();i++){
            sum_1^=nums[i];
            
        }
       
        return sum_1;
    }
};