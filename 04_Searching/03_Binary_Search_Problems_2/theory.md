# 🧠 Binary Search Problems - Part 2 (Advanced)

This section covers two classic, highly asked interview questions that apply Binary Search in non-trivial ways.

---

## 📌 1. Search in a Rotated Sorted Array

An array sorted in ascending order is rotated at some pivot unknown to you beforehand. For example, `[0,1,2,4,5,6,7]` might become `[4,5,6,7,0,1,2]`.

We need to search for a `target` element in $O(\log N)$ time.

### ⚡ Key Observation:
For any element `mid` in a rotated sorted array, **at least one half** of the array (left or right) is always fully sorted.

### ⚡ Algorithm:
1. Find `mid`.
2. If `arr[mid] == target`, return `mid`.
3. Check if the **left half** (`arr[start]` to `arr[mid]`) is sorted:
   - If `arr[start] <= arr[mid]`: Left half is sorted.
     - Check if target lies within this range: `arr[start] <= target < arr[mid]`.
     - If yes, search left: `end = mid - 1`.
     - Else, search right: `start = mid + 1`.
4. If the left half is not sorted, the **right half** must be sorted:
   - Check if target lies within this range: `arr[mid] < target <= arr[end]`.
     - If yes, search right: `start = mid + 1`.
     - Else, search left: `end = mid - 1`.

---

## 📌 2. Peak Index in a Mountain Array

A **mountain array** (also called a bitonic array) increases to a peak element and then decreases. Example: `[0, 2, 10, 5, 2]` has peak element `10` at index `2`.

We want to find the index of the peak element in $O(\log N)$ time.

### ⚡ Logic:
- If `arr[mid] < arr[mid + 1]`: We are on the increasing slope. The peak lies to the right. So set `start = mid + 1`.
- If `arr[mid] > arr[mid + 1]`: We are on the decreasing slope (or at the peak). The peak lies at `mid` or to the left. So set `end = mid`.
- The loop terminates when `start == end`, which is the peak index.

---

## 📈 Complexity Analysis
* **Time Complexity**: $O(\log N)$ — We eliminate half of the search space in each iteration.
* **Space Complexity**: $O(1)$ — Only constant helper variables are used.
