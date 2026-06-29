class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int m = goal.size();

        if (n != m) return false;

        int i = 0;

        while (i < n) {
            if (s[i] == goal[0]) {

                int j = 0;

                // Match suffix of s with prefix of goal
                while (i + j < n && s[i + j] == goal[j]) {
                    j++;
                }

                // Entire string matched
                if (j == n)
                    return true;

                bool temp = true;

                // Match remaining prefix of s with remaining suffix of goal
                for (int a = 0; a < n - j; a++, j++) {
                    if (s[a] != goal[j]) {
                        temp = false;
                        break;
                    }
                }

                if (temp)
                    return true;
            }

            i++;
        }

        return false;
    }
};