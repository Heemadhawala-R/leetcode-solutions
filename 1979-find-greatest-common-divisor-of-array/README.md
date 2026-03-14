https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/
# Find Greatest Common Divisor of Array – README

## Problem

Given an integer array **nums**, return the **greatest common divisor (GCD)** of the **smallest number** and the **largest number** in the array.

The **greatest common divisor** of two numbers is the **largest number that divides both numbers without leaving a remainder**.

---

## Example

Input

```id="0y4h9g"
nums = [2,5,6,9,10]
```

Smallest number

```id="q1b6in"
2
```

Largest number

```id="xfm3q4"
10
```

GCD calculation

```id="5cbv20"
gcd(10,2) = 2
```

Output

```id="y9l3pp"
2
```

---

## Approach

To solve this problem, we follow two main steps:

1. **Find the smallest and largest elements in the array.**
2. **Compute their GCD using Euclid’s Algorithm.**

## Algorithm

1. Initialize **min** and **max** with the first element of the array.
2. Traverse the array:

   * Update **min** if a smaller value is found.
   * Update **max** if a larger value is found.
3. Apply **Euclid’s Algorithm** to compute the GCD of **max** and **min**.
4. Return the result.

## Time Complexity

Finding the minimum and maximum:

```id="j2ox1m"
O(n)
```

Euclid’s GCD algorithm:

```id="7yzg4x"
O(log n)
```

Overall complexity:

```id="s2my0c"
O(n)
```

---

## Space Complexity

```id="7zj7hy"
O(1)
```
