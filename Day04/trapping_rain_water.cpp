// LeetCode Problem: 42. Trapping Rain Water (Hard)
// Topic: Two Pointers
// Approach: Converging pointers with tracking of leftMax and rightMax
// Language: C++
// Notes:
// - Took significant time to understand — multiple failed attempts, videos, and guided walkthroughs
// - Final understanding centered around two core ideas:
//   1️⃣ Water trapped at index i is min(leftMax, rightMax) - height[i]
//   2️⃣ Move the pointer (left or right) with the smaller max height inward

class Solution {
public:
    int trap(vector<int>& height) {
        int totalWater = 0;
        int n = height.size();
        int l = 0, r = n - 1;         // Two pointers: left and right
        int lmax = 0, rmax = 0;       // Keep track of the tallest walls seen so far from both sides

        // Process from both ends toward the center
        while (l < r) {
            lmax = max(lmax, height[l]);  // Update left max so far
            rmax = max(rmax, height[r]);  // Update right max so far

            // Key Idea #1:
            // Water trapped at current index is:
            //     min(lmax, rmax) - height[current]
            //
            // But to avoid computing min() every time and wasting work,
            // we move the pointer from the side with the smaller wall inward.
            if (lmax < rmax) {
                // Left side is the bottleneck; right wall is guaranteed to be taller
                totalWater += lmax - height[l];  // Water trapped depends on left max
                l++;  // Move left pointer inward
            } else {
                // Right side is the bottleneck; left wall is taller
                totalWater += rmax - height[r];  // Water trapped depends on right max
                r--;  // Move right pointer inward
            }
        }

        return totalWater;
    }
};
