class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n/3==0){
            unordered_set<int> ans;
            for(int ele:nums){
                ans.insert(ele);
            }
            return {ans.begin(),ans.end()};
        }
        // unordered_map<int,int> mp;
        // unordered_set<int> ans;
        // for(int ele:nums){
        //     mp[ele]++;
        //     if(mp[ele]>n/3){
        //         ans.insert(ele);
        //     }
        // }
        // return {ans.begin(),ans.end()};
        sort(nums.begin(),nums.end());
        int freq=1;
        unordered_set<int> ans;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])freq++;
            else{
                freq=1;
            }
            if(freq>n/3){
                ans.insert(nums[i]);
            }
        }
        return {ans.begin(),ans.end()};
        
    }
};