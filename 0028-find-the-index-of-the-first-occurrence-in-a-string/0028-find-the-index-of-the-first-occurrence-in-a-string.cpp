class Solution {
public:
    int strStr(string a, string b) {
        if(b.size()>a.size())return -1;
        for(int i=0;i<a.size();i++){
            if(a[i]==b[0]){
                if(a.substr(i,b.size())==b)return i;
            }
        }
        return -1;
    }
};