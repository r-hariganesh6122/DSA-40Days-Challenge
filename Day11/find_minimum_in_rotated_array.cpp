// 🔒 LeetCode Problem: 153. Find Minimum in Rotated Sorted Array
// 📚 Topic: Binary Search
// 🔧 Approach: Narrow down search using right-side bias
// 💬 Notes:
// - Binary search by comparing middle with right
// - If nums[m] > nums[r], then minimum is to the right
// - Else, minimum is at mid or to the left
// - Final position of 'l' gives the minimum

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1;

        while (l < r) {
            int m = l + (r - l) / 2;

            // If middle element is greater than right, min must be to the right
            if (nums[m] > nums[r]) {
                l = m + 1;
            } else {
                // Else, the min is at mid or on the left side
                r = m;
            }
        }

        // After the loop, left points to the minimum
        return nums[l];
    }
};
