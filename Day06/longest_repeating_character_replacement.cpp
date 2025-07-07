// 🔒 LeetCode Problem: 424. Longest Repeating Character Replacement
// 📚 Topic: Sliding Window + Frequency Count
// 🔧 Approach: Track the frequency of the most frequent character in the window
// 💬 Notes:
// - Applied frequency array method (vector<int>(26)) for efficiency
// - Core logic: shrink window only when (window size - maxFreq > k)
// - Helped strengthen understanding of flexible window sizing

class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq = 0, maxlen = 0;
        int l = 0, r = 0;
        vector<int> a(26, 0); // Frequency count of characters (A–Z)

        while (r < s.size()) {
            int key = s[r] - 'A';
            a[key]++;
            freq = max(freq, a[key]); // Track most frequent char in window

            // If we need to replace more than k chars, shrink window
            while ((r - l + 1 - freq) > k) {
                a[s[l] - 'A']--;
                l++;
            }

            maxlen = max(maxlen, r - l + 1);
            r++;
        }

        return maxlen;
    }
};
