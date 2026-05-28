class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       unordered_map<int,int> mp;
        // set<vector<int>> vst;
        int n=nums.size();
        for(int ele:nums){
            mp[ele]++;
        }
        if(k==0){
            int count=0;
            for(auto it :mp){
                if(it.second>=2)count++;
            }
            return count;
        }
        else{
            int count=0;
            for(auto it:mp){
                int req=it.first+k;
                if(mp.find(req)!=mp.end()){
                    count++;

                }
            }
            return count;
        }
        // return vst.size();
    }
};