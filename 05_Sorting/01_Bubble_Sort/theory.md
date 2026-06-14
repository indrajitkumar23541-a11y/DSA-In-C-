# 🧠 Bubble Sort

**Bubble Sort** is a simple comparison-based sorting algorithm. It works by repeatedly stepping through the list, comparing adjacent elements, and swapping them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

The algorithm gets its name because smaller elements "bubble" to the top (beginning) of the list while larger elements sink to the bottom (end) of the list.

---

## ⚡ How it Works
1. In the first pass, compare `arr[0]` with `arr[1]`. If `arr[0] > arr[1]`, swap them.
2. Next, compare `arr[1]` with `arr[2]`, swap if necessary. Repeat this for all adjacent pairs until the end of the array is reached.
3. After the first pass, the largest element is guaranteed to be at the last index (`N-1`).
4. In the next pass, repeat the same process, but only up to index `N-2`.
5. Repeat this for $N-1$ passes.

### 💡 Optimization:
If during any pass, no swaps occur, it means the array is already sorted. We can break out of the loop early, reducing the time complexity to $O(N)$ for an already sorted array.

---

## 🔍 Dry Run Example

Let's sort the array: `arr = [6, 2, 8, 4]`

- **Pass 1**:
  - Compare 6 and 2 -> swap -> `[2, 6, 8, 4]`
  - Compare 6 and 8 -> no swap -> `[2, 6, 8, 4]`
  - Compare 8 and 4 -> swap -> `[2, 6, 4, 8]`
  *(Largest element 8 reached the end).*
- **Pass 2**:
  - Compare 2 and 6 -> no swap -> `[2, 6, 4, 8]`
  - Compare 6 and 4 -> swap -> `[2, 4, 6, 8]`
  *(Second largest 6 is sorted).*
- **Pass 3**:
  - Compare 2 and 4 -> no swap.
  *(No swaps in this pass, array is sorted. Exit early).*

---

## 📈 Complexity Analysis

* **Time Complexity**:
  * **Worst Case**: $O(N^2)$ — Reverse sorted array.
  * **Average Case**: $O(N^2)$.
  * **Best Case**: $O(N)$ — When the array is already sorted and we use the `swapped` optimization flag.
* **Space Complexity**: $O(1)$ — In-place sorting.
* **Stability**: **Stable** (Does not swap equal elements, preserving their original relative order).
