class Solution {
public:
    string frequencySort(string s) {
        // Count frequency
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        // Move map data into a vector so we can sort by value
        vector<pair<char, int>> sor(freq.begin(), freq.end());

        // Sort by frequency in decreasing order
        sort(sor.begin(), sor.end(),
             [](auto &a, auto &b) {
                 return a.second > b.second;   // sort by value DESC
             });

        // Build result string
        string result;
        for (auto &p : sor) {
            result.append(p.second, p.first);   // repeat char p.first, p.second times
        }

        return result;
    }
};
