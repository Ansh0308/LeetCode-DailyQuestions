class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        ans=strs[0];
        int n=strs.size();
        
        for(int i=1;i<n;i++){
            string one=ans;
            ans="";
            string two=strs[i];
            int k=0,j=0;
            while(k<one.size() && j<two.size()){
                if(one[k]==two[j]){
                    ans+=one[k];
                }
                else{
                    break;
                }
                k++;
                j++;
            }
        }
        return ans;
        
    }
};