class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0;
        int n= time.size();
        unordered_map<int,int> mp;
        for(int ele:time){
            int rem=ele%60;
            int need=(60-rem)%60;
            if(mp.find(need)!=mp.end()){
                count+=mp[need];
            }
            mp[ele%60]++;
        }
        return count;
        
    }
};