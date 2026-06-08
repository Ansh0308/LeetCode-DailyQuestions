class Solution {
public:
    bool isPoss(vector<int>& nums,int p,int mid){
        int i=1;
        int paris=0;
        while(i<nums.size()){
            if(nums[i]-nums[i-1]<=mid){
                paris++;
                i+=2;
            }
            else{
                i++;
            }
        }
        return paris>=p;

    }
    int minimizeMax(vector<int>& nums, int p) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int start=0,end=nums[n-1];
        int ans=0;
        while(start<=end){
            int mid =start+(end-start)/2;
            if(isPoss(nums,p,mid)){
                ans=mid;
                end=mid-1;

            }
            else{
                start=mid+1;
            }

        }

        return ans;
    }
};