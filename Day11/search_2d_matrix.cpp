// 🔒 LeetCode Problem: 74. Search a 2D Matrix
// 📚 Topic: Binary Search (2D Matrix)
// 🔧 Approach: Nested Binary Search (First row-wise, then column-wise)
// 💬 Notes:
// - First binary search to find the correct row (where target may lie)
// - Then binary search within that row to find the target
// - Time Complexity: O(log m + log n) where m = rows, n = cols

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();          // number of rows
        int n1 = matrix[0].size();      // number of columns

        int l = 0, r = n - 1;

        // First binary search to find the correct row
        while (l <= r) {
            int m = (l + r) / 2;

            // If target lies in the range of the current row
            if (target >= matrix[m][0] && target <= matrix[m][n1 - 1]) {
                // Binary search within the found row
                int l1 = 0, r1 = n1 - 1;
                while (l1 <= r1) {
                    int m1 = (l1 + r1) / 2;
                    if (matrix[m][m1] == target)
                        return true;
                    else if (matrix[m][m1] < target)
                        l1 = m1 + 1;
                    else
                        r1 = m1 - 1;
                }
                return false; // Target not found in row
            }

            // Move to appropriate half
            else if (matrix[m][0] < target)
                l = m + 1;
            else
                r = m - 1;
        }

        return false; // Target not found
    }
};
