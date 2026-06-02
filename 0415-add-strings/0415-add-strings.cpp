class Solution {
public:
    string addStrings(string num1, string num2) {
      int i=num1.size()-1,j=num2.size()-1;
      int sum=0,carry=0;
      string ans="";
      while(i>=0 || j>=0|| carry!=0){
        sum=carry;
        sum+=(i>=0)?num1[i]-'0':0;
        sum+=(j>=0)?num2[j]-'0':0;
        carry=sum/10;
        ans+=to_string(sum%10);
        i--;
        j--;


      }
      reverse(ans.begin(),ans.end());
      return ans;

        
    }
};