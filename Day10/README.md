## 📅 Day 10 – Linked List II

### ✅ Problems Solved:

- ✅ [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
- ✅ [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)
- ✅ [LRU Cache](https://leetcode.com/problems/lru-cache/)
- ✅ [Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)

---

### 🔍 Highlights:
- Refined understanding of **dummy nodes** for safe manipulation of linked lists.
- Reinforced handling of **carry logic** while working with digits stored in linked lists.
- Mastered design of **LRU Cache** using `unordered_map` and `list` with iterators.
- Gained confidence solving a **Hard problem** (`reverseKGroup`) using custom reversal logic and sliding window technique.

---

## 🧠 Takeaways

### 🔹 Merge Two Sorted Lists
- Learned how to use a **dummy head pointer** to simplify edge case handling.
- Used two pointers (`t1`, `t2`) to traverse and merge two sorted linked lists.
- Properly freed memory for the dummy node to avoid memory leaks.

### 🔹 Add Two Numbers
- Reinforced carry handling while adding two numbers stored in reverse order in linked lists.
- Recognized the importance of checking for remaining carry after both lists are exhausted.
- Converted manual digit addition logic from binary/logic gate understanding to code.
- Again used a dummy node to streamline node creation and return.

### 🔹 LRU Cache
- Learned to design a fully functional **Least Recently Used (LRU) cache** using:
  - `unordered_map<int, pair<int, list<int>::iterator>>` for O(1) access.
  - `list<int>` to track the order of usage.
- Understood how to move recently accessed elements to the front of the list.
- Gained clarity on when and how to evict the least recently used item from the cache.
- Became comfortable with `list<int>::iterator` and erasing/updating positions.

### 🔹 Reverse Nodes in k-Group
- First hard problem of the day, solved with confidence.
- Broke the problem down into smaller components:  
  - Finding k-group windows.  
  - Reversing nodes only if a complete group exists.
- Implemented a **helper function** to reverse sublists between two pointers.
- Took special care to **avoid reversing the last group** if its size is less than k.
- Learned to connect reversed parts with the main list using a dummy node and a moving tail pointer.
