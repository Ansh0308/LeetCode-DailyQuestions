class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& nums) {
 
        int dx = nums[1][0] - nums[0][0];
        int dy = nums[1][1] - nums[0][1];
        
     
        for (int i = 2; i < nums.size(); i++) {
            int curr_dx = nums[i][0] - nums[0][0];
            int curr_dy = nums[i][1] - nums[0][1];
            
          
            if (dy * curr_dx != curr_dy * dx) {
                return false;
            }
        }
        return true;
    }
};
