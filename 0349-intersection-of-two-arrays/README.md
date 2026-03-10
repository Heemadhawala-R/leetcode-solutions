https://leetcode.com/problems/intersection-of-two-arrays/description/
# 349. Intersection of Two Arrays

## Problem
Given two integer arrays `nums1` and `nums2`, return an array of their **intersection**.
Each element in the result must be **unique**, and the result can be returned in **any order**.

## Example
Input:
nums1 = [1,2,2,1]
nums2 = [2,2]

Output:
[2]

## Approach
First sort both arrays using `qsort()`.
Then use the **two-pointer technique** to compare elements of both arrays.

If the elements are equal, add the element to the result (ensuring no duplicates).
If one element is smaller, move the pointer of that array forward.

## Time Complexity
O(n log n + m log m)

## Space Complexity
O(min(n, m))

