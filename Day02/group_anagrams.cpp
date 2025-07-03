// LeetCode Problem: 49. Group Anagrams
// Topic: Arrays & Hashing
// Approach: Sort each string and group by the sorted version
// Language: C++
// Notes:
// - I initially struggled with nested containers (e.g., map inside vector)
// - Switched to using an unordered_map<string, vector<string>> for simplicity and speed
// - Learned that sorting each string creates a canonical form for grouping anagrams

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> a;  // map sorted string → group of anagrams
        vector<vector<string>> b;  // result container

        for (string s : strs) {
            string x = s;
            sort(x.begin(), x.end());  // sort the string to normalize all anagrams
            a[x].push_back(s);         // group original string by its sorted key
        }

        // Collect all grouped anagram vectors into the result
        for (auto& y : a) {
            b.push_back(y.second);
        }

        return b;
    }
};
