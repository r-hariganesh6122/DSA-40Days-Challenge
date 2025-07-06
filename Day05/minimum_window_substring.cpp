// 🔒 LeetCode Problem: 76. Minimum Window Substring (Hard)
// 📚 Topic: Sliding Window
// 🔧 Approach: Two hash maps (target & window) + dynamic window shrinking
// 🧠 Key Insight: Shrink the window only when all required characters are matched (have == need)
// 💬 Notes:
// - Started with brute-force using maps and a custom `contains()` function
// - It was functional but not optimal — very slow
// - Learned that `have == need` condition is the correct time to update the minimum
// - Understood how to properly contract the window while maintaining the constraints

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> a;   // Map for required characters in t
        unordered_map<char, int> win; // Current window's character counts
        int n = s.size();

        // Step 1: Count all required characters in string t
        for (char c : t) a[c]++;
        int need = a.size();  // Total unique chars required

        int start = 0;        // Start index of the result substring
        int have = 0;         // Number of required characters fulfilled in current window
        int mlen = INT_MAX;   // Minimum window length found

        int l = 0, r = 0;     // Sliding window pointers

        // Step 2: Expand the right side of the window
        while (r < n) {
            win[s[r]]++;

            // If character is required and count matches, increment 'have'
            if (a.count(s[r]) && a[s[r]] == win[s[r]]) {
                have++;
            }

            // Step 3: Try shrinking from the left while all requirements are met
            while (have == need) {
                // Update result if this window is smaller
                if (r - l + 1 < mlen) {
                    mlen = r - l + 1;
                    start = l;
                }

                // Shrink the window from the left
                if (a.count(s[l]) && a[s[l]] == win[s[l]]) {
                    have--;
                }
                win[s[l]]--;
                l++;
            }

            r++;
        }

        return (mlen == INT_MAX) ? "" : s.substr(start, mlen);
    }
};
