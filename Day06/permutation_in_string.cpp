// 🔒 LeetCode Problem: 567. Permutation in String
// 📚 Topic: Sliding Window + Frequency Count
// 🔧 Approach: Compare frequency arrays over a fixed-size sliding window
// 💬 Notes:
// - Initially used unordered_maps but struggled with complexity and equality check
// - After learning vector frequency arrays, solution became much cleaner
// - Key logic: Maintain a fixed-size window over s2 and compare it with s1's frequency

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        if (n1 > n2) return false;

        vector<int> a1(26, 0), a2(26, 0); // Frequency arrays for a–z

        // Count character frequency in s1 and initial window of s2
        for (int i = 0; i < n1; i++) {
            a1[s1[i] - 'a']++;
            a2[s2[i] - 'a']++;
        }

        // If initial window matches
        if (a1 == a2) return true;

        // Sliding window logic
        int l = 0, r = n1;
        while (r < n2) {
            a2[s2[r++] - 'a']++;        // Add new char at right end
            a2[s2[l++] - 'a']--;        // Remove leftmost char
            if (a1 == a2) return true;  // Compare window with s1
        }

        return false;
    }
};
