class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& nums) {
        int m=nums.size(),n=nums[0].size();
        vector<int> ans;
        int top=0,down=m-1,left=0,right=n-1;
        while(left<=right && top<=down){
            if(left<=right && top<=down){
                for(int i=left;i<=right;i++){
                    ans.push_back(nums[top][i]);
                }
                top++;
            }
            if(top<=down && left<=right){
                for(int i=top;i<=down;i++){
                    ans.push_back(nums[i][right]);
                }
                right--;
            }
            if(left<=right && top<=down){
                for(int i=right;i>=left;i--){
                    ans.push_back(nums[down][i]);
                }
                down--;
            }
            if(top<=down && left<=right){
                for(int i=down;i>=top;i--){
                    ans.push_back(nums[i][left]);
                }
                left++;
            }


        }
        return ans;
        
    }
};