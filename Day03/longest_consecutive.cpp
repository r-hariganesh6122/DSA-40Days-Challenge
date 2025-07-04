// LeetCode Problem: 128. Longest Consecutive Sequence
// Topic: Arrays & Hashing
// Approach: Use unordered_set to build a sequence start and expand from it
// Language: C++
// Notes:
// - Originally assumed nested loops = O(n^2), but learned that this logic is O(n)
// - The outer loop only starts new sequences when i-1 is not found
// - The continue ensures we don’t recompute overlapping sequences

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> a;
        int len = 0;

        // Insert all elements into a set for O(1) lookups
        for (int i : nums) a.insert(i);

        for (int i : a) {
            // Only start a sequence if i is the beginning of it (i-1 not found)
            if (a.contains(i - 1)) continue;

            int currlen = 1;
            int j = i + 1;

            // Expand the sequence
            while (a.contains(j)) {
                j++;
                currlen++;
            }

            len = max(len, currlen);
        }

        return len;
    }
};
