class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.size();
        stack<int> st;
        vector<bool> remove(n,false); 
        for(int i=0;i<n;i++){
            if(s[i]==')' && st.empty()){
                remove[i]=true;
                continue;
            }
            if(s[i]==')' && !st.empty()){
                st.pop();
            }
            if(s[i]=='('){
                st.push(i);

            }
        }
        while(!st.empty()){
            remove[st.top()]=true;
            st.pop();
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(remove[i])continue;
            ans+=s[i];
        }
        return ans;
    }
};