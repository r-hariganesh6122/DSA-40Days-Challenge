// 🔒 LeetCode Problem: 239. Sliding Window Maximum
// 📚 Topic: Sliding Window + Monotonic Deque
// 🔧 Approach: Maintain a deque of indices in decreasing order of values
// 💬 Notes:
// - My 3rd LeetCode Hard problem
// - Initially tried brute force, but got Time Limit Exceeded
// - Learned and applied Monotonic Deque — a new concept to me
// - Deque stores indices, not values, allowing efficient window tracking

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;       // Stores indices of potential max elements
        vector<int> res;

        for (int i = 0; i < nums.size(); i++) {
            // Remove indices that are out of the current window
            if (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();

            // Maintain decreasing order in deque
            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

            // Add current index
            dq.push_back(i);

            // Start pushing results once window is of size k
            if (i >= k - 1)
                res.push_back(nums[dq.front()]);  // Front holds the max element
        }

        return res;
    }
};
