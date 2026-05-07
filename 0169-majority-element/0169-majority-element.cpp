class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0,maj=-1;
        for(int ele:nums){
            if(freq==0)maj=ele;
            (ele==maj)?freq++:freq--;
        }
        return maj;
        
    }
};