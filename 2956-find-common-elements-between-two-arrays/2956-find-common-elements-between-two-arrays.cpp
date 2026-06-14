class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int ans1=0,ans2=0;
        unordered_map<int,int> mp;

        for(int ele:nums1){
            mp[ele]++;
        }
        for(int ele:nums2){
            if(mp.find(ele)!=mp.end()){
                ans1+=mp[ele];
                mp[ele]=0;
            }
        }
        mp.clear();
        for(int ele:nums2){
            mp[ele]++;
        }
        for(int ele:nums1){
             if(mp.find(ele)!=mp.end()){
                ans2+=mp[ele];
                mp[ele]=0;
            }
        }
        return{ans1,ans2};
    }
};