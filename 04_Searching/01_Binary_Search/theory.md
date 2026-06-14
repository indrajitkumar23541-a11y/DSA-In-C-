# 🧠 Binary Search

**Binary Search** is an extremely efficient algorithm for finding a target element in a **sorted collection** (array or vector). It works by repeatedly dividing the search interval in half.

---

## 📌 Prerequisite
The array **must be sorted** (either in ascending or descending order). If the array is not sorted, Binary Search cannot be applied directly.

---

## ⚡ How it Works (Divide & Conquer)
1. Initialize two pointers: `start = 0` and `end = size - 1`.
2. Find the middle element: 
   $$mid = start + \frac{end - start}{2}$$
   *(Note: Using this formula instead of `(start + end) / 2` avoids integer overflow issues when `start` and `end` are very large).*
3. Compare the middle element with the target:
   - If `arr[mid] == target`, return `mid`.
   - If `arr[mid] < target`, the target must be in the right half. So, set `start = mid + 1`.
   - If `arr[mid] > target`, the target must be in the left half. So, set `end = mid - 1`.
4. Repeat steps 2-3 until `start > end`. If not found, return `-1`.

---

## 🔍 Dry Run Example

Search for **target = 18** in sorted array: `arr = [2, 4, 6, 8, 12, 18, 25, 37]`
`size = 8`

### **First Iteration:**
- `start = 0`, `end = 7`
- `mid = 0 + (7 - 0) / 2 = 3`
- `arr[mid] = arr[3] = 8`
- Since `8 < 18`, target is in the right half. Set `start = mid + 1 = 4`.

### **Second Iteration:**
- `start = 4`, `end = 7`
- `mid = 4 + (7 - 4) / 2 = 5`
- `arr[mid] = arr[5] = 18`
- Since `arr[mid] == target`, we return index **5**.

---

## 📈 Complexity Analysis

* **Time Complexity**:
  * **Best Case**: $O(1)$ — Occurs when the middle element is the target on the first comparison.
  * **Worst Case**: $O(\log N)$ — Since we divide the search space by half in each step, the maximum comparisons are $\log_2(N)$.
  * **Average Case**: $O(\log N)$.
* **Space Complexity**:
  * **Iterative Approach**: $O(1)$ — Only standard variables are used.
  * **Recursive Approach**: $O(\log N)$ — Auxiliary space due to the call stack of recursion.
