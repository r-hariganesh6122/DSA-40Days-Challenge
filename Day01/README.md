# 📅 Day 1 – Arrays & Hashing

Following the [NeetCode DSA Roadmap](https://neetcode.io/roadmap), I started my 40-day challenge today with 3 LeetCode problems under Arrays & Hashing.

---

### ✅ Problems Solved

- [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)
- [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/)
- [1. Two Sum](https://leetcode.com/problems/two-sum/)

---

### 💡 Key Takeaways

#### 🔸 Contains Duplicate
- Learned about the `unordered_set` container
- Discovered that `.count()` checks for element existence
- Used `for (int i : nums)` range-based loop for the first time

#### 🔸 Valid Anagram
- Applied range-based loop again for character traversal
- Learned that `unordered_map<char, int>` can insert and update using `map[ch]++`
- Realized that `unordered_map` is efficient for frequency counting

#### 🔸 Two Sum
- Chose `multimap` to handle duplicate values while tracking indices
- Learned that `.find()` returns an **iterator**, not a boolean or index
- Understood how to access values via iterator using the `->` operator
- Used `auto` for cleaner iteration over map pairs

---

🧠 Overall, today helped me:
- Build confidence in C++ containers (`set`, `unordered_map`, `multimap`)
- Practice range-based loops and iterators
- Write cleaner, logic-first code instead of brute-force
