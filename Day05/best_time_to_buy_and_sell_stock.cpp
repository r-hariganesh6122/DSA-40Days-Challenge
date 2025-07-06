// LeetCode Problem: 121. Best Time to Buy and Sell Stock
// Topic: Sliding Window
// Approach: Maintain a left pointer at the buying day and expand right pointer for potential selling
// Language: C++
// Notes:
// - Initially considered a brute-force approach
// - Learned that when price at right < price at left, reset left = right
// - Updated profit only when right price is higher than left

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int l = 0, r = 0;  // l = buy pointer, r = sell pointer

        while (r < n) {
            if (prices[r] > prices[l]) {
                // Valid window: sell at r, buy at l
                profit = max(prices[r] - prices[l], profit);
            } else {
                // If price drops, reset buying day to current
                l = r;
            }
            r++;  // Move the selling window
        }

        return profit;
    }
};
