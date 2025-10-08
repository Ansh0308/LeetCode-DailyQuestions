class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros=0,ones=0,twos=0;
        for(int ele : nums){
            if(ele==0)zeros++;
            else if(ele==1)ones++;
            else{
                twos++;
            }
        }
        int i=0;
        int n=nums.size();
        int bound=zeros;
        while(i<bound && i<n){
            nums[i]=0;
            i++;
        }
        bound=i+ones;
        while(i<bound && i<n){
            nums[i]=1;
            i++;
        }
        bound=i+twos;
        while(i<bound && i<n){
            nums[i]=2;
            i++;
        }
        
    }
};