# 🏆 Standard Array Interview Problems

This folder contains classic, high-frequency interview problems on arrays. Understanding these will build your problem-solving muscle.

---

## 1. Two Sum Problem
### Problem Statement:
Given an array of integers `arr` and an integer `target`, return indices of the two numbers such that they add up to `target`.

### Example:
* **Input**: `arr = [2, 7, 11, 15]`, `target = 9`
* **Output**: `[0, 1]` (Since `arr[0] + arr[1] == 9`)

### Approaches:
1. **Brute Force ($O(N^2)$)**: Try every pair using nested loops.
2. **Two-Pointer Approach ($O(N \log N)$)**:
   * Sort the array first.
   * Put one pointer at the start and one at the end.
   * If the sum of elements at pointers is equal to `target`, return.
   * If sum is smaller, move the start pointer forward (to increase sum).
   * If sum is larger, move the end pointer backward (to decrease sum).

---

## 2. Kadane's Algorithm (Maximum Subarray Sum)
### Problem Statement:
Given an integer array `arr`, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

### Example:
* **Input**: `arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]`
* **Output**: `6` (Subarray is `[4, -1, 2, 1]`)

### Approach (Intuition):
* We traverse the array and maintain a `currentSum` (running sum) and `maxSum` (global maximum).
* For each element, we add it to `currentSum`.
* If `currentSum` becomes greater than `maxSum`, we update `maxSum`.
* **The Magic Step**: If `currentSum` falls below `0`, it will only decrease the sum of any future subarray. So, we reset `currentSum` to `0`.
* **Time Complexity**: $O(N)$ (One single pass).
* **Space Complexity**: $O(1)$ (No extra space).
