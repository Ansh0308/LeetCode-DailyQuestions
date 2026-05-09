class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        

        int i=0,j=0;
        while(i<n-1 && j<n && nums[i]!=nums[i+1]){
            i++;
            j++;
        }
        while(i<n && j<n){
            while(i<n && nums[i]==nums[j])i++;
            if(i<n && j<n-1 && nums[i]!=nums[j])swap(nums[++j],nums[i++]);
        }

        return j+1;
    }
};