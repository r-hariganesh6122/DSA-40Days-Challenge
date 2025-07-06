# 📅 Day 5 of 40 – Sliding Window (NeetCode Roadmap)

Today I explored one of the most versatile and foundational techniques in problem-solving — the **Sliding Window**. It started off smooth and ended with a deep dive into my second LeetCode Hard problem. Here's what I tackled:

---

## ✅ Problems Solved

- [x] Best Time to Buy and Sell Stock
- [x] Longest Substring Without Repeating Characters
- [x] Minimum Window Substring (Hard)

---

## 🔍 Takeaways & Learning

### 🔹 Best Time to Buy and Sell Stock
- Initially used brute force but aimed for optimal sliding window logic
- Realized that when `prices[right] < prices[left]`, the left pointer must reset to `right`
- Helped me understand how a window can still work with only one reset pointer

---

### 🔹 Longest Substring Without Repeating Characters
- Got the main sliding window logic quickly
- Struggled a bit with **where** to update the `max length`
- Realized that the update must happen **after** inserting a character into the window
- Also learned how to shrink the window correctly when duplicates occur

---

### 🔹 Minimum Window Substring (Hard)
- My second LeetCode Hard problem
- Initially tried a brute-force method using two maps and a custom `contains()` function — but it was slow
- Learned the efficient approach using `have` and `need` counters
- Key realization: update result only when `have == need`
- Finally understood how to shrink the window properly while still maintaining valid constraints

---

## 💬 Summary

Sliding Window turned out to be more than just a two-pointer variation. It’s about maintaining and shrinking a valid window while tracking complex conditions with hash maps or sets. I'm glad I pushed through the hard problem — it was challenging but incredibly rewarding.

---

### 🔖 Hashtags

#Day5 #DSAChallenge #NeetCode #SlidingWindow #LeetCode #CPlusPlus #100DaysOfCode #CodeEveryday
