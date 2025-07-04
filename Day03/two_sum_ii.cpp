// LeetCode Problem: 167. Two Sum II – Input Array Is Sorted
// Topic: Two Pointers
// Approach: Use converging pointers to find the two numbers that sum to target
// Language: C++
// Notes:
// - This problem felt intuitive — logic came together naturally
// - Applied the two-pointer strategy effectively on a sorted array
// - Used early returns and condition checks to keep things efficient

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> a;
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int num = numbers[left] + numbers[right];

            if (num > target) {
                right--;
                continue;
            } 
            if (num < target) {
                left++;
                continue;
            }

            // Found the pair — 1-indexed result
            a.push_back(left + 1);
            a.push_back(right + 1);
            break;
        }

        return a;
    }
};
