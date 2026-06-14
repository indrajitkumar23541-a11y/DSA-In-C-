# 🧠 Quick Sort

**Quick Sort** is a highly efficient sorting algorithm based on the **Divide and Conquer** approach. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot.

---

## ⚡ How it Works (Divide & Conquer)

1. **Choose a Pivot**: Choose an element as pivot (e.g., the first element, the last element, or a random element).
2. **Partition**: Rearrange the array so that:
   - All elements smaller than the pivot are moved to its left.
   - All elements greater than the pivot are moved to its right.
   - The pivot element is now in its final correct sorted position.
3. **Recursion**: Recursively apply Quick Sort to the left sub-array (elements smaller than pivot) and the right sub-array (elements greater than pivot).

---

## 🔍 Partitioning Algorithm (Lomuto Partition)
- Place pivot at the end (or start).
- Use a pointer `i` to track the boundary of elements smaller than the pivot.
- Traverse the array using a pointer `j`. If `arr[j] < pivot`, increment `i` and swap `arr[i]` with `arr[j]`.
- Finally, swap pivot with `arr[i+1]` to place it in its correct sorted position.

---

## 📈 Complexity Analysis

* **Time Complexity**:
  * **Best Case**: $O(N \log N)$ — Occurs when the partition process always divides the array into two equal halves.
  * **Average Case**: $O(N \log N)$.
  * **Worst Case**: $O(N^2)$ — Occurs when the partition process always divides the array unbalanced (e.g., when the array is already sorted or reverse sorted, and we choose the first or last element as pivot).
* **Space Complexity**: $O(\log N)$ auxiliary space (due to the recursive call stack).
* **Stability**: **Unstable** (Can change the relative order of equal elements during swaps).
* **In-place**: **Yes** (It does not require any auxiliary array, unlike Merge Sort).
