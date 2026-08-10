class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_set<int> rep;
        // for(int ele : nums){
        //     if(rep.find(ele)!=rep.end()){
        //         return ele;
        //     }
        //     rep.insert(ele);
        // }
        int slow=nums[0],fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }

        
        return slow;
    }
};