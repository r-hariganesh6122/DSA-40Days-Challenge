# 📅 Day 6 of 40 – Sliding Window (NeetCode Roadmap)

Today’s focus was on mastering the Sliding Window technique. I worked through three problems — each one teaching me something new about how to track state across a moving window. I also tackled my third hard problem and discovered the power of the **monotonic deque**.

---

## ✅ Problems Solved:
- ✔️ Permutation in String  
- ✔️ Longest Repeating Character Replacement  
- ✔️ Sliding Window Maximum (Hard)

---

## 📘 What I Learned:

### 🔹 Permutation in String
  ➤ Initially used two `unordered_map`s, but ran into logical and performance issues  
  ➤ Learned to use `vector<int>(26)` for frequency tracking (more efficient for fixed alphabets)  
  ➤ Compared frequency windows using simple equality check  
  ➤ Fixed-size window makes this a direct application of sliding window + frequency count

---

### 🔹 Longest Repeating Character Replacement
  ➤ Reused frequency array technique  
  ➤ Core logic: shrink window if `window size - max frequency > k`  
  ➤ Helped me learn to maintain window size based on allowable replacements  
  ➤ Once the logic clicked, the rest of the problem felt smooth

---

### 🔹 Sliding Window Maximum
  ➤ Initially got TLE using brute-force approach  
  ➤ Learned the **Monotonic Deque** technique — completely new concept for me  
  ➤ Used a deque to maintain a decreasing order of indices  
  ➤ This made it possible to track max efficiently across the window in O(n) time  
  ➤ Understanding the why behind storing **indices instead of values** made everything fall into place

---

## 🧠 Key Takeaways:
- Sliding Window can be fixed-size or dynamic — frequency tricks help with both  
- `vector<int>(26)` is your best friend for character problems  
- Monotonic Deques are powerful for solving hard problems involving windowed max/min  
- Learning the right technique transforms a hard problem into a straightforward one

---

#DSAChallenge #NeetCode #SlidingWindow #LeetCode #CPlusPlus #MonotonicDeque #100DaysOfCode
