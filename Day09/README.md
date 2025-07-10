# 👨‍💻 Day 9 of 40 – Linked List (NeetCode Roadmap)

Today I explored classic Linked List problems — from basic operations to using hash maps and dummy nodes. This was a mix of familiar logic and some refreshing new tricks.

---

## ✅ Problems Solved:

- ✅ Reverse Linked List
- ✅ Reorder List
- ✅ Remove Nth Node From End of List
- ✅ Copy List with Random Pointer
- ❌ Merge K Sorted Lists (Skipped – need to study Heap/Priority Queue first)

---

## 🔍 Key Takeaways

### 🔹 Reverse Linked List
- Understood and implemented the 3-pointer technique (prev, curr, next)
- Traversed through the list, reversing pointers in-place
- Reinforced my grasp of pointer manipulation in singly-linked lists

---

### 🔹 Reorder List
- Learned two ways to solve it: 
  - Greedy method: Split → Reverse → Merge
  - Stack method: Pushed all nodes into a stack and inserted from the end
- I went with the stack-based approach for simplicity
- Faced a bug by using `st.size()` inside the loop while popping, which made me realize the importance of not mutating loop conditions

---

### 🔹 Remove Nth Node From End of List
- Applied sliding window technique with two pointers
- Learned about using a dummy node to handle edge cases like deleting the head
- Clean and effective method once I handled boundary conditions

---

### 🔹 Copy List with Random Pointer
- This was new and insightful!
- Used a hash map to map original nodes to their deep copies
- Created all nodes first and then established their `next` and `random` links
- Understood the power of separating creation and linking stages

---

### ❌ Merge K Sorted Lists
- Skipped for now since it requires understanding of Heaps / Priority Queue
- Will revisit once I complete the Heap section in the roadmap

---

Every problem today strengthened my understanding of pointer manipulation and list operations. Tomorrow I’ll be prepared to tackle more advanced pointer problems or dive into heaps!

---

#Day9 #DSAChallenge #NeetCode #CPlusPlus #LeetCode #CodeEveryday #100DaysOfCode #LinkedList
