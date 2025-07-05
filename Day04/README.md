# 📅 Day 4 – Two Pointers (NeetCode Roadmap)

Today's set pushed my thinking with a mix of intuitive and really challenging problems. I had to battle through my first LeetCode Hard — and though it tested me, I came out the other side stronger.

---

### ✅ Problems Solved

- [15. 3Sum](https://leetcode.com/problems/3sum/)
- [11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/)
- [42. Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)
- [167. Two Sum II – Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) *(Solved on Day 3)*

---

### 💡 Key Takeaways

#### 🔹 3Sum
- Faced early trouble with **handling duplicates**
- Learned to start the `left` pointer at `i + 1` — which made the base logic similar to Two Sum
- Struggled with **skipping duplicates inside the two-pointer loop**
- Understood the pattern only after seeing a solution — felt a bit disappointed but recognized what I missed

#### 🔹 Container With Most Water
- A relatively **smooth problem** — felt intuitive
- Understood how **moving the shorter height** pointer helps maximize area
- Just needed to track and compare areas between two vertical lines

#### 🔹 Trapping Rain Water (Hard)
- Started strong with **trigger-based pointers**, but got stuck after the tallest block
- Lost confidence after 5+ hours of attempts — had to check the solution
- Watched multiple videos but didn’t click — until a full **30-min NeetCode video** + ChatGPT walkthrough helped
- **2 core concepts** changed everything:
  1. Trapped water = `min(leftMax, rightMax) - height[i]`
  2. Use **converging pointers**, always move the side with smaller max

---

This was the **most mentally demanding** day so far — and the one with the most growth. I know I’ll carry this logic into future problems.

