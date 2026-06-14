# 🧠 Binary Search Problems - Part 1 (Occurrences)

This section focuses on finding the **First Occurrence**, **Last Occurrence**, and **Total Occurrence** of a duplicate element in a sorted array using Binary Search.

---

## 📌 1. First and Last Occurrence

In a sorted array with duplicate elements, we want to find the first index and the last index where a `target` element appears.

### ⚡ Logic for First Occurrence:
1. Perform standard binary search.
2. If `arr[mid] == target`:
   - Store `mid` in an `ans` variable (as a potential first occurrence).
   - Since we want the **first** occurrence, there might be other matching elements to the **left**. So, search the left half: set `end = mid - 1`.
3. If `arr[mid] < target`, search the right half: `start = mid + 1`.
4. If `arr[mid] > target`, search the left half: `end = mid - 1`.

### ⚡ Logic for Last Occurrence:
1. Perform standard binary search.
2. If `arr[mid] == target`:
   - Store `mid` in an `ans` variable (as a potential last occurrence).
   - Since we want the **last** occurrence, search the **right** half: set `start = mid + 1`.
3. Repeat steps for `<` and `>` comparisons.

---

## 📌 2. Total Number of Occurrences

Once we have the first and last occurrence of a target element in a sorted array, the total count of that element is:

$$\text{Total Occurrences} = (\text{Last Occurrence Index} - \text{First Occurrence Index}) + 1$$

*If the target is not present in the array (i.e., first occurrence is `-1`), then the total occurrences will be `0`.*

---

## 📈 Complexity Analysis
* **Time Complexity**: $O(\log N)$ — We run binary search twice (once for first occurrence, once for last occurrence).
* **Space Complexity**: $O(1)$ — No extra space is used.
