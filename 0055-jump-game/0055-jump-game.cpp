class Solution {
public:
    
    
    bool canJump(vector<int>& nums) {
        int n=nums.size();
       int bestSol=n-1;
       bool ans=true;
       for(int i=n-1;i>=0;i--){
        
        if(nums[i]+i<bestSol){
            ans=false;
        }
        else{
            ans=true;
            bestSol=i;
        }
        
       }
        return ans;
    }
};