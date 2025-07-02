// LeetCode Problem: 217. Contains Duplicate
// Topic: Arrays & Hashing
// Approach: Use unordered_set to track seen elements
// Language: C++
// Notes:
// - This was one of the first problems where I learned about the range-based for loop (:) in C++
// - I used unordered_set because it provides O(1) average time complexity for insert and lookup
// - The count() function was new to me — I discovered it checks if an element exists in the set

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> n;  // Using a set to store unique numbers
        
        // Range-based for loop — concise and easier than traditional for loop
        for (int i : nums) {
            // If the number is already in the set, we found a duplicate
            if (n.count(i)) 
                return true;

            // Otherwise, insert the number into the set
            n.insert(i);
        }

        // If we finish looping without finding duplicates, return false
        return false;
    }
};
