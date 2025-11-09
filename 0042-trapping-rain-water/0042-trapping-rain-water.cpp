class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
        vector<int> l_max(n,height[0]);
        vector<int> r_max(n,height[n-1]);
        int lmax=height[0],rmax=height[n-1];
        for(int i=1;i<n;i++){
            l_max[i]=lmax;
            lmax=max(lmax,height[i]);
            r_max[n-i-1]=rmax;
            rmax=max(rmax,height[n-i-1]);

        }
        for(int i=0;i<n;i++){
            if((min(l_max[i],r_max[i])-height[i])>0){
                ans+=(min(l_max[i],r_max[i])-height[i]);
            }
        }
        return ans;
        
    }
};