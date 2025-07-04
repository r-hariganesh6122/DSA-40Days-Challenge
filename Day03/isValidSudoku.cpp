// Filename: isValidSudoku.cpp
// Description:
// Validates a 9x9 Sudoku board by checking whether each row, column,
// and 3x3 grid contains no duplicate digits (excluding empty cells denoted by '.').
//
// This uses 3 sets per row iteration to ensure:
//   1. No duplicates in the current row
//   2. No duplicates in the current column
//   3. No duplicates in the corresponding 3x3 grid
//
// The trickiest part is calculating the correct (row, col) positions
// for each cell inside the 3x3 subgrids (boxes), which we explain step-by-step.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); ++i) {
            unordered_set<char> row, column, grid;

            for (int j = 0; j < board[i].size(); ++j) {
                // 1️⃣ ROW CHECK
                // Traverse left to right in the i-th row
                if (board[i][j] != '.') {
                    if (row.count(board[i][j])) return false;
                    row.insert(board[i][j]);
                }

                // 2️⃣ COLUMN CHECK
                // Traverse top to bottom in the i-th column
                if (board[j][i] != '.') {
                    if (column.count(board[j][i])) return false;
                    column.insert(board[j][i]);
                }

                // 3️⃣ 3x3 GRID CHECK (Box)
                // Each 3x3 grid is indexed by i (0 to 8)
                //
                // Grid index mapping:
                //   0 | 1 | 2
                //  ---+---+---
                //   3 | 4 | 5
                //  ---+---+---
                //   6 | 7 | 8
                //
                // For each grid (i):
                //   Grid starting row = (i / 3) * 3
                //   Grid starting col = (i % 3) * 3
                //
                // Now, for j = 0 to 8, we want to iterate over the 9 cells inside that grid
                // Grid cell's row = (i / 3) * 3 + (j / 3)
                // Grid cell's col = (i % 3) * 3 + (j % 3)

                int r = (i / 3) * 3 + (j / 3);  // row within grid
                int c = (i % 3) * 3 + (j % 3);  // col within grid

                // Example: i = 4 (center grid)
                //   → rowStart = 3, colStart = 3
                // j from 0 to 8 gives:
                //   j=0 → (3,3)
                //   j=1 → (3,4)
                //   j=2 → (3,5)
                //   j=3 → (4,3)
                //   j=4 → (4,4)
                //   j=5 → (4,5)
                //   j=6 → (5,3)
                //   j=7 → (5,4)
                //   j=8 → (5,5)

                if (board[r][c] != '.') {
                    if (grid.count(board[r][c])) return false;
                    grid.insert(board[r][c]);
                }
            }
        }

        return true; // No duplicates found, so the board is valid
    }
};
