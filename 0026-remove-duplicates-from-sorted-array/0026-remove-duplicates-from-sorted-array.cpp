class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0;
        int n=nums.size();
        while(i<n-1 && nums[i]!=nums[i+1]){
            i++;
            j++;
        }
        while(j<n && i<n){
            while(i<n && j<n&&nums[i]==nums[j])j++;
            if(i<n-1 && j<n){
            swap(nums[++i],nums[j++]);}
        }

        return i+1;
    }
};