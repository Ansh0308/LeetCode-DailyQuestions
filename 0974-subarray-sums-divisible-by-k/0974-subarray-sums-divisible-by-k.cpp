class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];

        }
        int count=0;
        unordered_map<int,int> mp;
        for(int ele:nums){
            int temp=(ele)%k;
            if(temp<0){
                temp=k+temp;
            }
            if(temp==0)count++;
            if(mp.find(temp)!=mp.end()){
                count+=mp[temp];
            }
            mp[temp]++;

        }
        return count;
    }
};