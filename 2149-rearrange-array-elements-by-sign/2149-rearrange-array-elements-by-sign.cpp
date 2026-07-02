class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos;
        vector<int> neg;
        for(int ele:nums){
            if(ele<0)neg.push_back(ele);
            else{
                pos.push_back(ele);
            }
        }
        vector<int> ans(n);

int p = 0, ne = 0;
for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
        ans[i] = pos[p++];
    else
        ans[i] = neg[ne++];
}

return ans;
        return ans;

        
    }
};