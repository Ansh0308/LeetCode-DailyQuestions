class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1)return false;
        stack<char> par;
        for(char ele : s){
            if(ele=='(' || ele=='{' || ele=='['){
                par.push(ele);
            }
           else{
            if(par.empty())return false;
            if(ele==')' && par.top()!='(')return false;
            if(ele=='}' && par.top()!='{')return false;
            if(ele==']' && par.top()!='[')return false;
            par.pop();
           }
        }
        return par.empty();
    }
};