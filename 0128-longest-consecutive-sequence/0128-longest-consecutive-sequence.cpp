class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        set<int> sor;
        for(int ele:nums){
            sor.insert(ele);
        }
         int longest = 1;
        int curr = 1;

        auto prev = sor.begin();
        auto it = next(sor.begin());
        while(it!=sor.end()){
            if(*it==*prev+1)curr++;
            else{
                curr=1;
            }
            longest=max(longest,curr);
            prev++;
            it++;


        }
        return longest;
    }
};