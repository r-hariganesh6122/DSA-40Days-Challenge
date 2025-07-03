// LeetCode Problem: 238. Product of Array Except Self
// Topic: Arrays & Hashing
// Approach: Prefix and suffix product without using extra space
// Language: C++
// Notes:
// - This problem introduced me to prefix and suffix product logic
// - Initially confusing, but once understood, it was elegant and space-efficient
// - Avoided using extra arrays by updating the result in-place

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> b(n, 1);  // Result array initialized with 1s
        int prefix = 1, suffix = 1;

        // Forward pass: calculate prefix product
        for (int i = 0; i < n; i++) {
            b[i] = prefix;
            prefix *= nums[i];
        }

        // Backward pass: multiply with suffix product
        for (int i = n - 1; i >= 0; i--) {
            b[i] *= suffix;
            suffix *= nums[i];
        }

        return b;
    }
};
