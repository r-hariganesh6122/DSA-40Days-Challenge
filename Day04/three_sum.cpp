// LeetCode Problem: 15. 3Sum
// Topic: Two Pointers
// Approach: Sort + Fix one element and use two-pointer scan to find the other two
// Language: C++
// Notes:
// - Faced difficulty with managing duplicates in both outer and inner loops
// - Learned to skip duplicates for both i, left, and right pointers
// - Realized the importance of starting `left = i + 1` to avoid self-pairing
// - Core structure is similar to Two Sum but with triple combinations

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> a;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            int left = i + 1, right = n - 1;

            // Skip duplicate values for the current i
            if (i > 0 && nums[i - 1] == nums[i]) continue;

            while (left < right) {
                int x = nums[i], y = nums[left], z = nums[right];
                int sum = x + y + z;

                if (sum > 0) {
                    right--;
                    continue;
                }
                if (sum < 0) {
                    left++;
                    continue;
                }

                // Found a valid triplet
                a.push_back({x, y, z});

                // Skip duplicates for left and right
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;

                left++;
                right--;
            }
        }

        return a;
    }
};
