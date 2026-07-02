class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    
        int n=nums.size();
        if(n==0)return 0;
        set<int> st;
        for(int ele:nums){
            st.insert(ele);
        }
        int gAns=0;
        int lAns=0;
        int prev=*st.begin()-1;
        for(int ele : st){
            if(ele==prev+1){
                lAns++;
            }
            else{
                lAns=1;
            }
            gAns=max(gAns,lAns);
            prev=ele;
        }
        return gAns;
        
    }
};