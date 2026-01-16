class Solution {
public:
    int myAtoi(string s) {
        string ans="";
        bool started=false,isneg=false;
        for(char ele :s){
            if (ele == ' ') {
        if (!started) continue;
            else break;
            }

            if((ele<'0' || ele>'9') && ele!='-' && ele!='+')break;
            if(ele=='+'||ele=='-'){
                if(started)break;
                else if(ele=='-'){
                    isneg=true;
                    continue;
                }
                else{
                    continue;
                }
                
            }
            
            started=true;
            ans+=ele;


        }
        if(ans.empty()) return 0;

        int conv=stoi(ans);
        return (isneg)?-1*conv:conv;
    }
};