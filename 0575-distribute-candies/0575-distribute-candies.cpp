class Solution {
public:
    int distributeCandies(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> st;
        for(int ele:nums){
            st.insert(ele);
        }
      
        return min(n/2,(int)st.size());
        
    }
};