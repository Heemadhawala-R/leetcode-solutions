https://leetcode.com/problems/contains-duplicate/
# 217. Contains Duplicate

## Problem
Given an integer array `nums`, return `true` if any value appears at least twice in the array, and return `false` if every element is distinct.

## Example
Input: nums = [1,2,3,1]
Output: true

## Approach
Sort the array and check adjacent elements. If two consecutive elements are equal, a duplicate exists.

## Time Complexity
O(n log n)

## Space Complexity
O(1)
