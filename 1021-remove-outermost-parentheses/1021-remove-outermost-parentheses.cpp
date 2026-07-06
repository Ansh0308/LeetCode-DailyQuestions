class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans;
        for(char curr: s){
            if(st.empty()==false && curr==')'){
                st.pop();
            }
            if(st.empty()==false){
                ans+=curr;
            }
            if(curr=='('){
                st.push(curr);
            }

        }
        return ans;
        
    }
};