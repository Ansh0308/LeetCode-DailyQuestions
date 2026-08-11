class Solution {
public:
    bool isValid(vector<int>& weights, int days,int mid){
        int day=0;
        long long sum=0;
        for(int i=0;i<weights.size();i++){
            while(i<weights.size() && sum+weights[i]<=mid){
                sum+=weights[i++];
            }
            day++;
            i--;
            sum=0;
            if(day>days)return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=1,high=1e9;
        int ans=1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isValid(weights,days,mid)){
                high=mid-1;
                ans=mid;
                }
                else{
                    low=mid+1;
                }
        }
        return ans;
        
    }
};