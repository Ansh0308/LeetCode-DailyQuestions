class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        map<int,int> frq;
        int count=0;
        for(int ele:nums){
            if(ele==k)count++;
            int diff=ele-k;
            if(frq.find(diff)!=frq.end()){
                count+=frq[diff];
            }
            frq[ele]++;


        }
        return count;
        
    }
};