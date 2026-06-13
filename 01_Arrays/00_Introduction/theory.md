# 🧠 Introduction to Arrays

## 📌 What is an Array?
An **Array** is a collection of similar types of data elements stored at contiguous (side-by-side) memory locations. 
For example, if you want to store the marks of 5 students, instead of creating 5 separate variables:
```cpp
int marks1, marks2, marks3, marks4, marks5;
```
You can create a single array of size 5:
```cpp
int marks[5];
```

---

## ⚡ Key Properties of Arrays

1. **Contiguous Memory**: Elements are stored sequentially in memory. If the first element is at memory address `1000`, the next element will be at `1004` (since an `int` takes 4 bytes in C++).
2. **Homogeneous Elements**: All elements in an array must be of the same data type (all integers, all characters, etc.).
3. **0-Based Indexing**: The first element is always at index `0`, the second at index `1`, and the last element of an array of size `N` is at index `N-1`.
4. **Static Size**: The size of a standard array must be known at compile time and cannot be changed during program execution.

---

## 💾 Memory Representation & Address Calculation

Because arrays are stored contiguously, the computer can find any element instantly using a simple formula:

$$\text{Address of } A[i] = \text{Base Address} + (i \times \text{Size of one element})$$

* **Base Address**: The memory address of the first element ($A[0]$).
* **$i$**: The index of the element you want to access.
* **Size of one element**: The number of bytes occupied by the data type (e.g., 4 bytes for `int`, 1 byte for `char`, 8 bytes for `double`).

### Example:
If base address is `2000` and we have an integer array:
* Address of $A[0] = 2000 + (0 \times 4) = 2000$
* Address of $A[1] = 2000 + (1 \times 4) = 2004$
* Address of $A[2] = 2000 + (2 \times 4) = 2008$

---

## 📈 Time Complexity of Array Operations
* **Accessing an element** (e.g., reading $A[3]$): $O(1)$ (constant time, because of direct address calculation).
* **Modifying an element**: $O(1)$.
* **Searching an element** (Linear Search): $O(N)$ (where $N$ is the size of the array).
