# 📅 Day 7 of 40 – Stack (NeetCode Roadmap)

Today’s problems revolved around using stacks — one of the most fundamental data structures in parsing, tracking state, and solving monotonic patterns.

---

## ✅ Problems Solved

- [✔️ Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
- [✔️ Min Stack](https://leetcode.com/problems/min-stack/)
- [✔️ Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)
- [✔️ Daily Temperatures](https://leetcode.com/problems/daily-temperatures/)
- [❌ Generate Parentheses](https://leetcode.com/problems/generate-parentheses/) *(skipped)*

---

## 🧠 What I Learned

### 🔹 Valid Parentheses
  ➤ Implemented stack to match opening and closing brackets  
  ➤ Simplified the logic using if-else instead of switch  
  ➤ Learned to handle edge cases like unmatched closings

### 🔹 Min Stack  
  ➤ Initially tried with one stack — didn’t work when popping min  
  ➤ Used a second stack to keep track of current min values  
  ➤ Learned when to push/pull from `minStack` (only if ≤ top)

### 🔹 Evaluate Reverse Polish Notation  
  ➤ Stack used to evaluate postfix expressions  
  ➤ Pop two elements, perform operation, and push result  
  ➤ Remembered operand order matters for `-` and `/`

### 🔹 Daily Temperatures  
  ➤ Used monotonic decreasing stack to find next warmer day  
  ➤ Stored indices in stack instead of values  
  ➤ Avoided mistake of using push_back — used assignment instead

### ❌ Generate Parentheses *(Skipped)*  
  ➤ Requires recursive backtracking — saving for recursion topic
