class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1)return s;
        string ans="";
        for(int i=0;i<numRows;i++){
            for(int j=i;j<s.size();j+=(numRows-1)*2){
                ans+=s[j];
                if(i>0 && i<numRows-1 && j+((numRows-1)*2)-2*i<s.size()){
                    ans+=s[j+((numRows-1)*2)-2*i];

                }
                

            }
        }
        return ans;
        
    }
};