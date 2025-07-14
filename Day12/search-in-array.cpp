// 🔒 LeetCode Problem: 704. Binary Search
// 📚 Topic: Binary Search
// 🔧 Approach: Standard binary search on sorted array
// 💬 Notes:
// - Used the classic `while(l <= r)` template
// - Calculated mid and adjusted left/right boundaries based on comparison
// - Efficient O(log n) search on sorted data

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;

        // Standard binary search loop
        while (l <= r) {
            int m = (l + r) / 2;

            // Found the target
            if (nums[m] == target) return m;

            // Target is on the left half
            else if (nums[m] > target) r = m - 1;

            // Target is on the right half
            else l = m + 1;
        }

        // Target not found
        return -1;
    }
};
