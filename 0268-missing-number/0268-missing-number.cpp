class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int ele : nums){
            sum^=ele;
        }
        for(int i=0;i<=n;i++){
            sum^=i;
        }
        return sum;
        
    }
};