class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        unordered_set<char> sub;
        int g_max = 0;
        int i = 0;                 // left pointer of the sliding window
        int n = s.size();
        for (int j = 0; j < n; ++j) {
            char ele = s[j];
            if (sub.find(ele) == sub.end()) {
                sub.insert(ele);
            } else {
                // remove characters from the left until the duplicate is gone
                while (sub.find(ele) != sub.end()) {
                    sub.erase(s[i]);
                    ++i;
                }
                sub.insert(ele);
            }
            g_max = max(g_max, (int)sub.size());
        }
        return g_max;
    }
};
