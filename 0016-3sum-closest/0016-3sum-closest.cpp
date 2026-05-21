class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff=INT_MAX;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans;
        for(int i=0;i<n;i++){
            while(i>0 && nums[i]==nums[i-1])continue;
            int j=i+1,k=n-1;
            while(j<k && j<n && k>=0){
            int sum=nums[i]+nums[j]+nums[k];
            if(abs(sum-target)<diff){
                diff=abs(sum-target);
                ans=sum;
            }
            if(sum>target){
                k--;
            }
            else if(sum<target){
                j++;
            }
            else{
                return sum;
            }
            
            }
            
        }
        return ans;

        
    }
};