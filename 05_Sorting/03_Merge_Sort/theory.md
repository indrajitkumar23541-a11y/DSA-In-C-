# 🧠 Merge Sort

**Merge Sort** is a highly efficient, comparison-based, sorting algorithm. It is based on the **Divide and Conquer** paradigm.

It works by recursively dividing the array into two halves, sorting each half, and then merging the two sorted halves back into a single sorted array.

---

## ⚡ How it Works (Divide & Conquer)

1. **Divide**: Calculate the middle element: `mid = start + (end - start) / 2` and split the array into two halves: `arr[start..mid]` and `arr[mid+1..end]`.
2. **Conquer**: Recursively sort both halves by calling `mergeSort()`.
3. **Combine**: Merge the two sorted halves into a single sorted array using a helper `merge()` function.

### 💡 Merging Process
To merge two sorted sub-arrays, we use two pointers to compare elements from each sub-array and copy the smaller element into a temporary array. Once we finish copying all elements, we copy the elements from the temporary array back to the original array.

---

## 🔍 Dry Run Example

Let's sort the array: `arr = [38, 27, 43, 3]`

1. **Split**: `[38, 27]` and `[43, 3]`
2. **Split Left**: `[38]` and `[27]`. Merged to `[27, 38]`.
3. **Split Right**: `[43]` and `[3]`. Merged to `[3, 43]`.
4. **Merge Both**: Compare `[27, 38]` and `[3, 43]`:
   - Compare 27 and 3 -> copy 3
   - Compare 27 and 43 -> copy 27
   - Compare 38 and 43 -> copy 38
   - Copy remaining 43
   - Result: `[3, 27, 38, 43]`

---

## 📈 Complexity Analysis

* **Time Complexity**:
  * **Best, Average, and Worst Case**: $O(N \log N)$ — Dividing the array takes $O(\log N)$ steps, and merging elements in each step takes $O(N)$ time.
* **Space Complexity**: $O(N)$ — To merge the sub-arrays, we need auxiliary memory (temporary array) of size proportional to the elements being merged.
* **Stability**: **Stable** (Maintains original relative order of duplicate elements because, during merge, if elements are equal, we choose the one from the left sub-array first).
* **In-place**: **No** (It requires $O(N)$ extra space).
