# ⚙️ Basic Array Operations

To work with arrays, we need to perform operations like inserting new data, deleting unwanted data, searching for an element, and traversing the array. Here is how they work and their time complexities.

---

## 1. Array Traversal
**Traversal** means visiting every element of the array exactly once (e.g., printing all elements).
* **Algorithm**: Use a loop from index `0` to `size-1`.
* **Time Complexity**: $O(N)$ (where $N$ is the number of elements).

---

## 2. Insertion Operation
Inserting a new element into an array. Since standard arrays have a fixed size, we must ensure there is capacity before inserting.

### A. Insertion at the End
* If the array has empty space at the end, we simply put the element at `arr[size]` and increment `size`.
* **Time Complexity**: $O(1)$ (Very fast!).

### B. Insertion at the Beginning or Specific Position
* To insert an element at index `K`, we must make space for it. 
* We do this by shifting all elements from index `K` to `size-1` **one position to the right** (starting from the last element to avoid overwriting).
* Then, place the new element at index `K` and increment `size`.
* **Time Complexity**: $O(N)$ (since we might have to shift up to $N$ elements).

---

## 3. Deletion Operation
Removing an element from the array.

### A. Deletion from the End
* We simply decrement the `size` of the array by 1. The last element is ignored.
* **Time Complexity**: $O(1)$.

### B. Deletion from the Beginning or Specific Position
* To delete an element at index `K`, we remove it and fill the gap.
* We do this by shifting all elements from index `K+1` to `size-1` **one position to the left**.
* Decrement the `size` by 1.
* **Time Complexity**: $O(N)$ (since we might shift up to $N$ elements).

---

## 4. Searching Operation
Finding the index of a target element in the array.

### Linear Search:
* We check each element one by one from index `0` to `size-1`.
* If we find the target, we return its index. If the loop ends and we didn't find it, we return `-1`.
* **Time Complexity**: $O(N)$ (Worst case: element is at the end or not present).
