# 📅 Day 11 - Binary Search

## ✅ Problems Solved

| Problem | Difficulty | Solution |
|--------|------------|----------|
| ✅ [Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/) | Medium | [searchMatrix.cpp](./searchMatrix.cpp) |
| ✅ [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/) | Medium | [minEatingSpeed.cpp](./minEatingSpeed.cpp) |
| ✅ [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | Medium | [findMin.cpp](./findMin.cpp) |
| ✅ [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | Medium | [searchInRotated.cpp](./searchInRotated.cpp) |

---

## 📌 Takeaways

### 🔍 Search a 2D Matrix
- Applied **binary search twice**: once on rows, then within the row.
- Recognized the 2D matrix as a sorted row-wise array.
- Reinforced confidence in nested binary search logic.

### 🍌 Koko Eating Bananas
- Understood **binary search on the answer space**.
- Key trick: minimize the eating speed such that total hours ≤ `h`.
- Learned to use `ceil` to simulate eating speed over hours.

### 🔄 Find Minimum in Rotated Sorted Array
- Needed only one binary search to find the rotation point.
- Used the trick of comparing mid and right elements.
- Reinforced that minimum lies in the **unsorted half**.

### 🎯 Search in Rotated Sorted Array
- Most tricky due to split logic: identifying sorted half each time.
- Improved reasoning about mid, left, and right values.
- Carefully adjusted left and right pointers depending on the **increasing subarray**.

---

## 🔗 GitHub Repository

If you want to follow or refer to the full code solutions:  
**📂 [DSA-40Days-Challenge](https://github.com/YourUsername/DSA-40Days-Challenge)**

---

