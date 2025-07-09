#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> hi;  // Monotonic increasing stack to store indices
        int area = 0;
        int n = heights.size();

        // Traverse all bars (including one extra step to flush stack)
        for (int i = 0; i <= n; i++) {
            // While current height is less than the top of stack (or at the end)
            while (!hi.empty() && (i == n || heights[i] < heights[hi.top()])) {
                int h = heights[hi.top()];
                hi.pop();

                // Width is either entire length so far or between smaller elements
                int w = hi.empty() ? i : i - hi.top() - 1;

                // Calculate area and update max
                area = max(area, h * w);
            }
            hi.push(i); // Push current index
        }

        return area;
    }
};
