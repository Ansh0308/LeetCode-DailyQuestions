class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uni=0;
        set<int> uni_nums;
        for(int ele : nums){
            uni_nums.insert(ele);
        }
        uni=uni_nums.size();
        int i=0;
        for(int ele : uni_nums){
            nums[i]=ele;
            i++;
        }
        return uni;

        
    }
};