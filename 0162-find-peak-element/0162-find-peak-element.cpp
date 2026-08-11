class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 0;
        int l=0,h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            int m_p=(mid+1>=n)?INT_MIN:nums[mid+1];
            int m_m=(mid-1<0)?-1:nums[mid-1];
            
            if(nums[mid]>m_m && nums[mid]>m_p)return mid;
            else if(nums[mid]>m_p){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return 0;
        
    }
};