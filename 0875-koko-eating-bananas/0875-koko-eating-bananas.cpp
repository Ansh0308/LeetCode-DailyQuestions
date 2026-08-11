class Solution {
public:
    bool isValid(vector<int> &piles, int h,int mid){
        long long hour=0;
        for(int i=0;i<piles.size();i++){
            
            hour+=(piles[i]+mid-1)/mid;
            if(hour>h)return false;
            
            // if(hour>=h)return false;

        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int st=1,end=1;
        for(int ele: piles){
            end=max(end,ele);
        }
        int ans=0;
        while(st<=end){
            int mid=(st+(end-st)/2);
            if(isValid(piles,h,mid)){
                end=mid-1;
                ans=mid;

            }
            else{
                st=mid+1;
            }
        }
        return ans;
        
        
    }
};