https://leetcode.com/problems/largest-number-after-digit-swaps-by-parity/
# Largest Number After Digit Swaps by Parity – README

## Problem

Given an integer **num**, you may swap **any two digits with the same parity**.

* **Even digits** can only swap with **even digits**
* **Odd digits** can only swap with **odd digits**

Your task is to **return the largest possible integer** that can be obtained after performing any number of such swaps.

Example

```
Input:  num = 1234
Output: 3412
```

Explanation
Odd digits: 1,3 → rearranged as **3,1**
Even digits: 2,4 → rearranged as **4,2**

Rebuild the number while keeping the **parity positions same**.

---

# Approach

The key idea is:

> **Maximize the number by placing the largest available digit of the same parity at each position.**

### Steps

1. **Extract digits** from the number.
2. **Separate digits into two groups**

   * Even digits
   * Odd digits
3. **Sort both groups in descending order**.
4. **Rebuild the number**:

   * If original digit was even → place the next largest even digit
   * If original digit was odd → place the next largest odd digit

This ensures the **largest possible number** while respecting parity swap rules.

# Complexity
### Time Complexity
```
O(d log d)
```
### Space Complexity
```
O(d)
```
