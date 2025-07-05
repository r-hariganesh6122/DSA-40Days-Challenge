// LeetCode Problem: 11. Container With Most Water
// Topic: Two Pointers
// Approach: Start with two ends and converge inward, always moving the shorter height
// Language: C++
// Notes:
// - Understood that width is (right - left) and height is min(h[left], h[right])
// - Moved the pointer with the smaller height to potentially find a taller line
// - Minor mistakes occurred but overall grasped the core logic quickly

class Solution {
public:
    int maxArea(vector<int>& height) {
        int larea = 0;
        int left = 0, right = height.size() - 1;

        while (left < right) {
            int l = height[left], r = height[right];
            int carea = min(l, r) * (right - left);  // Calculate area
            larea = max(carea, larea);               // Update max area found

            // Move the pointer pointing to the shorter line
            if (l < r) {
                left++;
            } else {
                right--;
            }
        }

        return larea;
    }
};
