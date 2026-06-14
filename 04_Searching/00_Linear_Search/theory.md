# 🧠 Introduction to Searching & Linear Search

Searching is the process of finding the position of a specific target element within a collection of data (like an array or vector).

---

## 📌 Linear Search (Sequential Search)

**Linear Search** is the simplest searching algorithm. It starts searching from the first element of the collection and goes element-by-element until the target is found or the end of the collection is reached.

### ⚡ How it Works:
1. Start from the 0th index.
2. Compare the current element with the target.
3. If the current element equals the target, return its index.
4. If not, move to the next index.
5. If the end of the array is reached and the target is not found, return `-1` (indicating target is not present).

---

## 🔍 Dry Run Example

Let's search for **target = 7** in the array: `arr = [3, 5, 2, 7, 9]`

| Step | Index | Element | Comparison | Result |
|------|-------|---------|------------|--------|
| 1    | 0     | 3       | `3 == 7`   | False  |
| 2    | 1     | 5       | `5 == 7`   | False  |
| 3    | 2     | 2       | `2 == 7`   | False  |
| 4    | 3     | 7       | `7 == 7`   | **True** (Return index 3) |

---

## 📈 Complexity Analysis

* **Time Complexity**:
  * **Best Case**: $O(1)$ — Occurs when the target element is at the very first index.
  * **Worst Case**: $O(N)$ — Occurs when the target is at the last index or not present in the array at all.
  * **Average Case**: $O(N)$ — On average, we search through half the array.
* **Space Complexity**: $O(1)$ — No extra memory is used, only a few pointers/variables.
