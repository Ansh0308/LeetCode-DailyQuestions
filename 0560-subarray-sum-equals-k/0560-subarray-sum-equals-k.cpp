class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        if(nums.size()==1 && nums[0]==k)return 1;
        int n=nums.size();
        int count=0;
        // for(int i=0;i<n;i++){
        //     int sum=nums[i];
        //     if(sum==k)count++;
        //     for(int j=i+1;j<n;j++){
                
        //         sum+=nums[j];
        //         if(sum==k)count++;
        //     }
        // }
        // vector<int> PS(n);
        // PS[0]=nums[0];
        // for(int i=1;i<n;i++){
        //     PS[i]+=PS[i-1]+nums[i];
        // }
        // unordered_map<int,int> PS_freq;
        // for(int j=0;j<n;j++){
        //     if(PS[j]==k)count++;
        //     int val=PS[j]-k;
        //     if(PS_freq.find(val)!=PS_freq.end()){
        //         count+=PS_freq[val];
        //     }
        //     PS_freq[PS[j]]++;
        // }
        // return count;
        // vector<int> PS(n,0);
        
        // PS[0]=nums[0];
        for(int i=1;i<n;i++){
            nums[i]=nums[i-1]+nums[i];
        }
        
        unordered_map<int,int> PS_freq;
        for(int i=0;i<n;i++){
            if(nums[i]==k)count++;
            int sum_minus=nums[i]-k;
            if(PS_freq.find(sum_minus)!=PS_freq.end()){
                count+=PS_freq[sum_minus];
            }
            PS_freq[nums[i]]++;
        }
        return count;
        
    }
};