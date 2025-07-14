// 🔒 LeetCode Problem: 287. Find the Duplicate Number
// 📚 Topic: Floyd’s Cycle Detection (Tortoise and Hare) in Linked List
// 🔧 Approach: Use the array values as pointers to simulate a cycle
// 💬 Notes:
// - The key idea is treating the array as a linked list where index points to value
// - If there's a duplicate, a cycle will be formed due to repeated values
// - First phase: Detect the meeting point using slow and fast pointers
// - Second phase: Reset one pointer to start and move both one step at a time to find cycle start

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // 🔁 Phase 1: Detect the cycle (Floyd's Tortoise and Hare)
        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];            // move 1 step
            fast = nums[nums[fast]];      // move 2 steps
        } while (slow != fast);

        // 🎯 Phase 2: Find entry point of the cycle (duplicate number)
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};
