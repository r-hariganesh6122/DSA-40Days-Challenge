// LeetCode Problem: 125. Valid Palindrome
// Topic: Two Pointers
// Approach: Use converging pointers to check for palindrome ignoring non-alphanumeric characters
// Language: C++
// Notes:
// - Practiced the two-pointer pattern in a real-world string problem
// - Used `isalnum()` to skip unwanted characters
// - `tolower()` was used to handle case-insensitivity
// - Reinforced the importance of the `left < right` condition in each loop

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            // Skip non-alphanumeric characters from both ends
            while (left < right && !isalnum(s[left])) left++;
            while (left < right && !isalnum(s[right])) right--;

            // Compare characters ignoring case
            if (tolower(s[left]) != tolower(s[right])) return false;

            left++;
            right--;
        }

        return true;
    }
};
