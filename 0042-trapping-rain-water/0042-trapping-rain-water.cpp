class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
        int L=0,R=n-1,lmax=0,rmax=0;
        while(L<R && L<n && R>=0){
            lmax=max(lmax,height[L]);
            rmax=max(rmax,height[R]);
            if(lmax<rmax){
                ans+=lmax-height[L++];
            }
            else{
                ans+=rmax-height[R--];
            }

        }
        return ans;
        
    }
};