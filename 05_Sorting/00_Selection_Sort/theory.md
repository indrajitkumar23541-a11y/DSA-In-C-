# 🧠 Selection Sort

**Selection Sort** is a simple comparison-based sorting algorithm. It divides the input array into two parts: a **sorted sub-array** (built up from left to right) and an **unsorted sub-array** containing the remaining elements.

In each iteration, the algorithm finds the **minimum element** from the unsorted sub-array and swaps it with the leftmost unsorted element, moving the sub-array boundary one element to the right.

---

## ⚡ How it Works
1. Start from the 0th index and scan the entire array to find the smallest element.
2. Swap the smallest element with the element at index `0`.
3. Move to index `1`, find the smallest element in the remaining unsorted array (from index `1` to `N-1`), and swap it with the element at index `1`.
4. Repeat this process until the entire array is sorted.

---

## 🔍 Dry Run Example

Let's sort the array: `arr = [64, 25, 12, 22, 11]`

- **Pass 1 (i = 0)**:
  - Find min element from index 0 to 4. Min is `11` (at index 4).
  - Swap `64` and `11`. Array becomes: `[11, 25, 12, 22, 64]`
- **Pass 2 (i = 1)**:
  - Find min element from index 1 to 4. Min is `12` (at index 2).
  - Swap `25` and `12`. Array becomes: `[11, 12, 25, 22, 64]`
- **Pass 3 (i = 2)**:
  - Find min element from index 2 to 4. Min is `22` (at index 3).
  - Swap `25` and `22`. Array becomes: `[11, 12, 22, 25, 64]`
- **Pass 4 (i = 3)**:
  - Find min element from index 3 to 4. Min is `25` (at index 3).
  - No swap needed. Array remains: `[11, 12, 22, 25, 64]`

The array is now sorted!

---

## 📈 Complexity Analysis

* **Time Complexity**:
  * **Best Case**: $O(N^2)$ — Even if the array is already sorted, we scan remaining elements to find the minimum.
  * **Worst Case**: $O(N^2)$ — Reverse sorted array.
  * **Average Case**: $O(N^2)$.
* **Space Complexity**: $O(1)$ — In-place sorting; no extra memory required.
* **Stability**: **Unstable** (Can change the relative order of duplicate elements during swaps, e.g., sorting `[2(a), 2(b), 1]` will swap `2(a)` with `1`, resulting in `[1, 2(b), 2(a)]`).
