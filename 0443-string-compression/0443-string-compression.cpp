class Solution {
public:
    int compress(vector<char>& chars) {
        string ans="";
        int n=chars.size();
        int i=0;
        
        while(i<n){
            char curr=chars[i];
            int count=0;
            while(i<n && curr==chars[i]){
                count++;
                i++;
            }
            ans+=curr;
            
            if(count>1){
                ans+=to_string(count);
            }
        }
         for(int j=0; j<ans.size(); j++)
            chars[j] = ans[j];
        return ans.size();
        
    }
};