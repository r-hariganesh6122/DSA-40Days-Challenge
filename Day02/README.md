# 📅 Day 2 – Arrays & Hashing (NeetCode Roadmap)

Continuing my 40-day DSA challenge, I tackled four problems today from the Arrays & Hashing section. These problems helped me go deeper into container usage, string manipulation, and prefix/suffix logic.

---

### ✅ Problems Solved

- [49. Group Anagrams](https://leetcode.com/problems/group-anagrams/)
- [347. Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)
- [238. Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)
- Encode and Decode Strings (Premium – followed YouTube tutorial)

---

### 💡 Key Takeaways

#### 🔹 Group Anagrams
- Initially struggled with nested containers using `map` inside `vector`
- Used `sort()` to normalize strings for grouping
- Switched to `unordered_map<string, vector<string>>` for better performance and cleaner code

#### 🔹 Top K Frequent Elements
- Used `unordered_map` to count frequencies
- Picked max value `k` times by iterating the map and erasing used keys
- A simple and efficient solution when `k` is small

#### 🔹 Product of Array Except Self
- Learned about prefix and suffix products for the first time
- Solved it with two passes (forward and backward) without using extra arrays
- Conceptually tricky at first but became intuitive after understanding the idea

#### 🔹 Encode & Decode Strings
- Followed a tutorial as the problem is behind LeetCode Premium
- Learned about using a **delimiter (`#`)** to separate values in encoded strings
- Practiced using `substr()`, `stoi()`, and `to_string()`
- Index handling (`i += x - 1`) was a bit confusing at first but worked out with trial and error

---

🚀 Each problem today stretched different parts of my understanding — from hashing tricks to string parsing and space-optimized logic.

