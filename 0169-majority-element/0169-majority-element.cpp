class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj=0,freq=0;
        for(int ele:nums){
            if(freq==0){
                maj=ele;
            }
            if(ele==maj)freq++;
            else{
                freq--;
            }
        }
        return maj;
        
    }
};