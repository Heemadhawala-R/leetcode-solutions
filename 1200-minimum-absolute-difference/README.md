# Minimum Absolute Difference

## Problem
Given an array of **distinct integers**, return all pairs `[a, b]` such that:

- `a < b`
- `b - a` is the **minimum absolute difference** among all pairs.

---

## Approach
1. **Sort the array**
2. Find the **minimum difference** between adjacent elements
3. Store all pairs with that minimum difference

Since the array is sorted, the smallest difference will always occur between **neighboring elements**.

---

## Time Complexity
- **O(n log n)** → Sorting  
- **O(n)** → Traversing array

---

## Example
Input:
```
[4,2,1,3]
```

Output:
```
[[1,2],[2,3],[3,4]]
```
