## 👨‍💻 Day 8 of 40 – Stack & Linked List (NeetCode Roadmap)

Today’s journey took me through some tricky Stack problems and wrapped up with a classic Linked List problem.

### 🔹 Problems Solved:

✔️ Car Fleet  
✔️ Largest Rectangle in Histogram  
✔️ Linked List Cycle  
❌ Generate Parentheses (Skipped – requires backtracking)

---

### 📘 Key Takeaways

#### 🚗 Car Fleet
- Used a vector of pairs to associate position and time.
- Learned how to sort in descending order using `sort(rbegin(), rend())`.
- Understood how to use a stack to count non-decreasing fleet arrival times.
- Realized the need for **explicit float conversion** to avoid integer division issues.

#### 🧱 Largest Rectangle in Histogram
- Learned the **monotonic stack** approach to compute maximum area.
- Tricky part: grasping why popping early is necessary to find the correct left boundary.
- Width calculation based on the index of previous smaller height was eye-opening.

#### 🔁 Linked List Cycle
- Implemented **Floyd’s Cycle Detection** algorithm.
- Faced confusion around the structure and behavior of linked lists at first.
- Understood the logic of using two pointers (slow and fast) to detect cycles efficiently.

---

Every problem gave me a small but meaningful lesson — from float precision to pointer tricks.

#Day8 #DSAChallenge #NeetCode #CPlusPlus #Stack #LinkedList #CodeEveryday #100DaysOfCode
