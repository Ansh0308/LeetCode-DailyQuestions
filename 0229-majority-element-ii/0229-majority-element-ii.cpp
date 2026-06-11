class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        unordered_set<int> ans;
        for(int ele:nums){
            mp[ele]++;
            if(mp[ele]>n/3){
                ans.insert(ele);
            }
        }
        return {ans.begin(),ans.end()};

        
    }
};