class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int t_length=m+n;
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        if(t_length%2!=0)return nums1[t_length/2];
        return double(nums1[t_length/2]+nums1[(t_length/2)-1])/2;
        
    }
};