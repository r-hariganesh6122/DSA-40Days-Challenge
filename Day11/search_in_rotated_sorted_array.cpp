// 🔒 LeetCode Problem: 33. Search in Rotated Sorted Array
// 📚 Topic: Binary Search with Rotation
// 🔧 Approach: Modified Binary Search based on sorted halves
// 💬 Notes:
// - At each step, one half (left or right) is sorted
// - Determine which half is sorted and if the target lies within that half
// - Adjust left/right pointers accordingly
// - Ensures O(log n) time complexity

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;

        while (l <= r) {
            int m = l + (r - l) / 2;

            // Target found
            if (nums[m] == target) return m;

            // Left half is sorted
            if (nums[l] <= nums[m]) {
                // Target is in the sorted left half
                if (nums[l] <= target && target < nums[m])
                    r = m - 1;
                else
                    l = m + 1;
            }
            // Right half is sorted
            else {
                // Target is in the sorted right half
                if (nums[m] < target && target <= nums[r])
                    l = m + 1;
                else
                    r = m - 1;
            }
        }

        return -1; // Target not found
    }
};
