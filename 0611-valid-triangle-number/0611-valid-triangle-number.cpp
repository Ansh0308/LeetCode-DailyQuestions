class Solution {
public:
    int idxS(vector<int>& nums,int i,int sum){
        int n=nums.size();
        int l=i,h=n-1,ans=i-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]<sum){
                l=mid+1;
                ans=mid;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=nums[i]+nums[j];
                int c_idx=idxS(nums,i+1,sum);
                if(c_idx>j){
                ans+=c_idx-j;}
            }
        }
        return ans;
        
    }
};