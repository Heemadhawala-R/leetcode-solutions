https://leetcode.com/problems/majority-element/
# 169. Majority Element

## Problem

Given an integer array `nums` of size `n`, return the **majority element**.

The majority element is the element that appears **more than ⌊n/2⌋ times**.
You may assume that the majority element always exists in the array.

## Example

Input: nums = [2,2,1,1,1,2,2]
Output: 2

## Approach

Sort the array using `qsort()`.
Since the majority element appears more than `n/2` times, it will always occupy the **middle position** of the sorted array.
Return the element at index `n/2`.

## Time Complexity
O(n log n)

## Space Complexity
O(1)
