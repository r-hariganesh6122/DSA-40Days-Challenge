// LeetCode Problem: 347. Top K Frequent Elements
// Topic: Arrays & Hashing
// Approach: Count frequencies using unordered_map and repeatedly find the max
// Language: C++
// Notes:
// - Used unordered_map to count occurrences of each element
// - Iterated k times to find the key with the highest frequency and added it to the result
// - Erased used elements from the map to avoid reusing them
// - This method works well when k is small and avoids using a heap

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> a;  // Frequency map
        vector<int> b;
        b.reserve(k);               // Pre-allocate space for top k elements

        // Count frequency of each number
        for (int i : nums) a[i]++;

        // Repeat k times to find the most frequent elements
        for (int i = 0; i < k; ++i) {
            int maxFreq = 0;
            int key;

            // Find the element with the highest frequency
            for (auto& z : a) {
                if (z.second > maxFreq) {
                    maxFreq = z.second;
                    key = z.first;
                }
            }

            b.push_back(key);  // Add the most frequent element
            a.erase(key);      // Remove it from the map to find next max
        }

        return b;
    }
};
