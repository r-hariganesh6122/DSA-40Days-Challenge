// LeetCode Problem: 1. Two Sum
// Topic: Arrays & Hashing
// Approach: Use multimap to store value → index pairs and find complements
// Language: C++
// Notes:
// - I skipped the brute-force O(n^2) nested loop and went for a more efficient lookup-based method
// - Learned that map-like structures store pairs, and you must use `auto` when iterating
// - `.find()` on a multimap returns an **iterator**, not a boolean or index — that was confusing at first
// - To access data from the iterator, I used the `->` operator (like a pointer)
// - `auto z = b.find(...)` finally made sense after seeing how iterators work

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;                // To store the result (indexes of two numbers)
        multimap<int, int> b;         // multimap allows multiple keys with the same value (e.g., duplicate numbers)
        int x = 0;

        // Store each number with its index in the multimap
        for (int i : nums) {
            b.insert({i, x});
            x++;
        }

        // Iterate over the map to find if target - current number exists
        for (auto i : b) {
            // `find()` returns an iterator to the first occurrence of (target - i.first)
            auto z = b.find(target - i.first);

            // Check if such a pair exists and it's not the same element (by index)
            if (z != b.end() && i.second != z->second) {
                a.push_back(i.second);
                a.push_back(z->second);
                return a;  // Return the first valid pair found
            }
        }

        return a;  // Return empty if no pair is found
    }
};
