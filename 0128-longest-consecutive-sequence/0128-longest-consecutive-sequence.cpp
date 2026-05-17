class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        set<int> se;
        for(int ele:nums){
            se.insert(ele);
        }
        auto curr=next(se.begin());
      
        auto prev=se.begin();
        int locM=1,gloM=1;
        while(curr!=se.end()){
            if(*curr==*prev+1)locM++;
            else{
                locM=1;
            }
            gloM=max(gloM,locM);
            curr++;
            prev++;
        }
        return gloM;
    }
};