// LeetCode Problem: 242. Valid Anagram
// Topic: Arrays & Hashing
// Approach: Use two unordered_maps to count character frequencies in both strings
// Language: C++
// Notes:
// - I reused the range-based for loop (:) from the previous problem
// - I was surprised to learn you can insert and increment elements in an unordered_map using indexing (a[x]++)
// - This behavior only works in map and unordered_map — it auto-creates the key if it doesn’t exist
// - Using unordered_map gives O(1) average access and insertion time

class Solution {
public:
    bool isAnagram(string s, string t) {
        // If lengths are not equal, they can't be anagrams
        if (s.size() != t.size()) return false;

        // a and b will store frequency of each character in s and t respectively
        unordered_map<char, int> a, b;

        // Count frequency of characters in string s
        for (char x : s) a[x]++;

        // Count frequency of characters in string t
        for (char y : t) b[y]++;

        // If both frequency maps are equal, then s and t are anagrams
        return a == b;
    }
};
