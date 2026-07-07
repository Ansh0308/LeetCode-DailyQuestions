class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int ele:nums){
            mp[ele]++;
        }
        int ans=0;
        for(auto ele:mp){
            int n=ele.second;
            if(n>1){
                ans+=n*(n-1)/2;
            }
        }
        return ans;
    }
};