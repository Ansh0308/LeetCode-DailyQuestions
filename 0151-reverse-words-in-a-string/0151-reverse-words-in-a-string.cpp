class Solution {
public:
    string reverseWords(string s) {
        int right = s.size() - 1;
        string ans;

        while (right >= 0) {
            while (right >= 0 && s[right] == ' ')
                right--;

            if (right < 0)
                break;

            int left = right;
            while (left >= 0 && s[left] != ' ')
                left--;

            ans += s.substr(left + 1, right - left);
            ans += ' ';

            right = left - 1;
        }

        if (!ans.empty())
            ans.pop_back();

        return ans;
    }
};