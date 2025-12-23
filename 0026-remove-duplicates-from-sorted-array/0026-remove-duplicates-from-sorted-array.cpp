class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int k,j=0;
        while(k<n-1 && j<n && nums[k]!=nums[k+1]){
            k++;
            j++;
        }
        while(k<n && j<n){
            while(j<n && nums[k]==nums[j])j++;
            if(j<n && nums[k]!=nums[j]){
                swap(nums[++k],nums[j++]);
            }
        }
        return k+1;
    }
};