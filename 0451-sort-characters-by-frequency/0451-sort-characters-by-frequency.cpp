class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (char ele : s) {
            mp[ele]++;
        }
        
        vector<pair<int, char>> vc;
        for (auto it : mp) {
            vc.push_back({it.second, it.first});
        }
        
        // Corrected line: Uses a lambda to compare the pairs in descending order
        sort(vc.begin(), vc.end(), [](const pair<int, char>& a, const pair<int, char>& b) {
            return a.first > b.first; // Sorts by frequency descending
        });
        
        string ans = "";
        for (auto it : vc) {
            for (int i = 0; i < it.first; i++) {
                ans += it.second;
            }
        }
        return ans;
    }
};
