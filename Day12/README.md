# 🚀 Day 12 of 40-Day DSA Challenge

📌 **Topic:** Binary Search II – Advanced Variants + Design

Today’s problems pushed the limits of binary search, especially with array partitioning and applying binary logic to design-like problems. Definitely a step up in thinking and edge-case handling!

---

## ✅ Problems Solved

### 1. [Binary Search](https://leetcode.com/problems/binary-search/)
- 🔧 **Approach**: Classic iterative binary search
- 💡 **Takeaways**:
  - A great warm-up
  - Helped re-solidify the intuition for adjusting mid, left, and right boundaries
  - Reminder: `(l + r) / 2` can overflow, so safe form is `l + (r - l) / 2`

---

### 2. [Time Based Key-Value Store](https://leetcode.com/problems/time-based-key-value-store/)
- 🔧 **Approach**: Hash map with vector of (value, timestamp) + binary search
- 💡 **Takeaways**:
  - Key learning: how to choose the right combination of data structures
  - `unordered_map<string, vector<pair<string, int>>>` helped map key → timestamped values
  - Binary search on timestamps gave O(log N) access time
  - Learned the correct use of binary search to return **last ≤ timestamp**

---

### 3. [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)
- 🔧 **Approach**: Floyd’s Tortoise and Hare (Cycle Detection)
- 💡 **Takeaways**:
  - Surprisingly a **linked list cycle problem in disguise**
  - We treat values as pointers, creating a cycle when a duplicate exists
  - Phase 1: Detect cycle using fast/slow pointers
  - Phase 2: Reset one pointer to start and move both one step to find cycle start (duplicate)

---

### 4. [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)
- 🔧 **Approach**: Binary Search on Partition
- 💡 **Takeaways**:
  - One of the trickiest binary search problems
  - Need to **binary search on partition index**, not value
  - Keep the left parts balanced using `(n1 + n2 + 1)/2`
  - Return `max(left1, left2)` or average of `max(left1, left2)` and `min(right1, right2)`
  - I now fully understand how partitioning two arrays leads to correct median

---

## 🧠 Key Learnings

- Binary search isn’t limited to sorted arrays — it can apply to search spaces, functions, and even partitions
- Using `unordered_map` with `vector<pair<>>` is super powerful for time-stamped or versioned data
- Floyd's cycle detection is one of those timeless tricks that shows up in unexpected places
- Partitioning arrays with edge-case handling using `INT_MIN` and `INT_MAX` helped sharpen precision

---

## 📌 Hashtags
#100DaysOfCode #DSA #LeetCode #BinarySearch #CycleDetection #DesignProblems #CodingChallenge #Cplusplus
