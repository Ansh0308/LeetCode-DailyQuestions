class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int right=n-1;
        string ans="";
        while(right>=0){
            while(right>=0 && s[right]==' ')right--;
            int left=right;
            while(left>=0 && s[left]!=' ')left--;
            if(!ans.empty()){
                ans+=' ';
            }
            ans+=s.substr(left+1,right-left);
            

            right=left-1;
        }
        if(ans[ans.size()-1]==' '){
            ans=ans.substr(0,ans.size()-1);
        }
        return ans;
        
    }
};