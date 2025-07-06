// 🔒 LeetCode Problem: 3. Longest Substring Without Repeating Characters
// 📚 Topic: Sliding Window
// 🔧 Approach: Maintain a window (vector) of unique characters and slide it dynamically
// 🧠 Key Insight: Update max length *after* pushing a new valid character
// 💬 Notes:
// - Problem felt intuitive once I understood the sliding window pattern
// - Initial confusion: didn't know where to place `ans = max(...)` — realized it goes after insertion
// - Used vector<char> as the window container, and find() to check for duplicates

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;      // Final result: max length found
        int len = 0;      // Current length of the window
        vector<char> a;   // Current window storing non-repeating characters
        int r = 0;        // Right pointer of the window

        while (r < s.size()) {
            // If character not in window, expand the window
            if (find(a.begin(), a.end(), s[r]) == a.end()) {
                a.push_back(s[r]);
                len++;
                r++;
                ans = max(ans, len);  // ✅ Update max length after expansion
                continue;
            }

            // If duplicate found, shrink window from the left until duplicate is removed
            while (a[0] != s[r]) {
                a.erase(a.begin());
                len--;
            }

            // Remove the duplicate character itself
            a.erase(a.begin());
            len--;

            // Add current character and continue
            a.push_back(s[r]);
            len++;
            r++;
        }

        return ans;
    }
};
