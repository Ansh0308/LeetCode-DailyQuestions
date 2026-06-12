class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;  // avoid infinite loop

        int n = s.size();
        string ans = "";

        for(int i = 0; i < numRows; i++) {
            int j = i;

            while(j < n) {
                ans += s[j];

                // middle rows have an extra diagonal character
                if(i != 0 && i != numRows - 1) {
                    int diag = j + (numRows - 1) * 2 - 2 * i;

                    if(diag < n) {
                        ans += s[diag];
                    }
                }

                j += (numRows - 1) * 2;
            }
        }

        return ans;
    }
};