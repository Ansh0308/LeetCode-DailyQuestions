class Solution {
public:
   
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        if(m!=n)return false;
        string merge=s+s;
        for(int i=0;i<merge.size();i++){
            if(merge[i]==goal[0]){
                if(merge.substr(i,m)==goal)return true;
            }
        }
        return false;
    }
};