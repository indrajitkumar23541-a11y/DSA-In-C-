# 🧠 Advanced Binary Search (Binary Search on Answer / Search Space)

In many advanced problems, we don't apply Binary Search to find an element in an array. Instead, we apply it to find the **optimum answer** from a range of possible answers (a **Search Space**). This technique is known as **Binary Search on Answer**.

---

## 📌 The Book Allocation Problem

Given $N$ books, where the $i$-th book has `arr[i]` pages, and $M$ students. The books must be allocated in a contiguous order to all $M$ students such that:
1. Each student gets at least one book.
2. The maximum number of pages allocated to a student is **minimized**.

### ⚡ Finding the Search Space:
- **Minimum possible answer (`start`)**: The maximum number of pages in any single book, i.e., `max(arr[i])`. (A student must read at least one whole book, and the student who gets the thickest book will read at least that many pages).
- **Maximum possible answer (`end`)**: The sum of all pages in all books, i.e., `sum(arr[i])`. (This happens if there is only $M = 1$ student who has to read all the books).

Our search space is from `start` to `end`. Since pages are integers, the search space `[start, end]` is implicitly sorted!

---

## ⚡ The Algorithm
1. Initialize `start = max(arr)`, `end = sum(arr)`, and `ans = -1`.
2. Find the midpoint: `mid = start + (end - start) / 2`.
3. Check if it is possible to allocate books such that no student reads more than `mid` pages:
   - **How to check (`isPossible(mid)`)**:
     - Loop through the books and sum their pages.
     - If the sum exceeds `mid`, assign the current book to the next student and reset the current sum.
     - If the number of students required exceeds $M$ or if a single book has pages $> mid$, it is not possible.
4. If it is **possible**:
   - `mid` is a potential solution. Store it: `ans = mid`.
   - Since we want to **minimize** the maximum pages, try to find an even smaller maximum. Search the left half: `end = mid - 1`.
5. If it is **not possible**:
   - `mid` is too small. We need a larger limit. Search the right half: `start = mid + 1`.

---

## 📈 Complexity Analysis
* **Time Complexity**: $O(N \times \log(\text{sum of pages} - \text{max of pages}))$. The binary search takes $\log(\text{range})$ steps, and in each step, we iterate through the $N$ books to validate.
* **Space Complexity**: $O(1)$ — Only helper variables are used.
