// 🔒 LeetCode Problem: 875. Koko Eating Bananas
// 📚 Topic: Binary Search (Search on Answer)
// 🔧 Approach: Binary search the minimum eating speed Koko can use to finish all bananas within H hours
// 💬 Notes:
// - Range for K: [1, max(piles)]
// - For each mid (possible eating speed), check total time needed
// - If time exceeds H, increase speed. Else try lower speed
// - Key formula: ceil(pile / speed) for each pile

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1; // Minimum eating speed
        int r = *max_element(piles.begin(), piles.end()); // Maximum pile size

        // Binary search for the minimum valid eating speed
        while (l <= r) {
            int m = (l + r) / 2; // Try middle speed
            double sum = 0;

            // Calculate total hours taken at speed m
            for (int i : piles) {
                sum += ceil((double)i / m);
            }

            // If more hours than allowed, need higher speed
            if (sum > h) l = m + 1;
            // Otherwise, try smaller speed to minimize
            else r = m - 1;
        }

        return l; // Left will be the minimum speed that works
    }
};
