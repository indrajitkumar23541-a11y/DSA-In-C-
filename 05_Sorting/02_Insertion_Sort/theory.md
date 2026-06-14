# 🧠 Insertion Sort

**Insertion Sort** is a simple sorting algorithm that works similarly to the way you sort playing cards in your hands. 

The array is virtually split into a **sorted** and an **unsorted** part. Values from the unsorted part are picked and placed at the correct position in the sorted part by shifting elements that are larger than the value.

---

## ⚡ How it Works
1. Assume the first element (`arr[0]`) is already sorted.
2. Take the next element `temp = arr[i]` (from index `1` to `N-1`).
3. Compare `temp` with elements in the sorted part (from index `i-1` down to `0`).
4. Shift all elements in the sorted part that are larger than `temp` to the right by one position.
5. Insert `temp` into its correct position.
6. Repeat this for all elements.

---

## 🔍 Dry Run Example

Let's sort the array: `arr = [5, 3, 8, 2]`

- **Pass 1 (i = 1)**:
  - `temp = 3`. Compare with sorted part `[5]`.
  - Since `5 > 3`, shift `5` to right -> `[5, 5, 8, 2]`.
  - Insert `3` at index 0 -> `[3, 5, 8, 2]`.
- **Pass 2 (i = 2)**:
  - `temp = 8`. Compare with sorted part `[3, 5]`.
  - Since `5 < 8`, no shifting is needed. Array remains: `[3, 5, 8, 2]`.
- **Pass 3 (i = 3)**:
  - `temp = 2`. Compare with sorted part `[3, 5, 8]`.
  - Since `8 > 2`, shift `8` -> `[3, 5, 8, 8]`.
  - Since `5 > 2`, shift `5` -> `[3, 5, 5, 8]`.
  - Since `3 > 2`, shift `3` -> `[3, 3, 5, 8]`.
  - Insert `2` at index 0 -> `[2, 3, 5, 8]`.

The array is now sorted!

---

## 📈 Complexity Analysis

* **Time Complexity**:
  * **Worst Case**: $O(N^2)$ — Reverse sorted array (we shift every element in every step).
  * **Average Case**: $O(N^2)$.
  * **Best Case**: $O(N)$ — When the array is already sorted (we only compare each element once with its predecessor and do no shifts).
* **Space Complexity**: $O(1)$ — Auxiliary space is constant.
* **Stability**: **Stable** (Does not change the relative order of duplicate elements since elements are only shifted if they are strictly larger than `temp`).
* **Why use it?** It is highly efficient for small arrays or arrays that are already partially sorted.
