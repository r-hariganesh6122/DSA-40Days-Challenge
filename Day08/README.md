# 📅 Day 8 of 40 – Stack & Linked List (NeetCode Roadmap)

Today I wrapped up the stack topic (skipped Generate Parentheses due to its BFS/backtracking nature) and moved into linked lists. Learned some deep techniques and cleared some long-standing confusions.

---

## ✅ Problems Solved

- ✔️ Car Fleet
- ✔️ Largest Rectangle in Histogram
- ✔️ Linked List Cycle

---

## 🧠 What I Learned

### 🔹 Car Fleet
  ➤ Paired each car's position with time = (target - position) / speed  
  ➤ Sorted using `sort(rbegin(), rend())` — learned about reverse iterators  
  ➤ Faced type conversion issue with float and int — must cast or assign to float after division  
  ➤ Tried a greedy approach, but then used a stack-based one: push times and count fleets where time is non-decreasing  
  ➤ Final insight: return the stack size for fleet count

### 🔹 Largest Rectangle in Histogram
  ➤ Couldn't find the approach initially, studied the solution  
  ➤ Learned the **monotonic increasing stack** technique  
  ➤ Push indices until a smaller bar is found  
  ➤ Pop and compute area using height × width, where width is `(i - st.top() - 1)`  
  ➤ Key takeaway: why popping first is necessary — left boundaries can be far away

### 🔹 Linked List Cycle
  ➤ Found the problem description confusing due to the hidden input structure  
  ➤ Learned how Floyd's Cycle Detection (tortoise and hare) algorithm works  
  ➤ Simple once understood: two pointers, one fast and one slow — if they meet, there's a cycle

---

## ❌ Skipped Problem

- ✖️ Generate Parentheses — involves backtracking/BFS, will revisit later

---

## ✅ Commit Message

