# 📊 Multi-Dimensional Arrays (2D Arrays)

## 📌 What is a 2D Array?
A **Two-Dimensional (2D) Array** is a collection of elements organized in a grid with **rows** and **columns** (like a matrix or table). 
In C++, a 2D array is essentially an "array of arrays".

---

## ⚡ Syntax in C++
To declare a 2D array:
```cpp
dataType arrayName[rows][columns];
```
For example, a matrix with 3 rows and 4 columns:
```cpp
int matrix[3][4];
```

### Initialization:
```cpp
int matrix[3][3] = {
    {1, 2, 3}, // Row 0
    {4, 5, 6}, // Row 1
    {7, 8, 9}  // Row 2
};
```

---

## 💾 Memory Representation (Row-Major Order)
Even though we visualize a 2D array as a grid, computer memory is **linear (1D)**. Therefore, the compiler must map 2D indices to a linear memory sequence. 

C++ uses **Row-Major Order**, which means elements are stored **row-by-row** in memory:
* First, all elements of Row 0 are stored.
* Then, all elements of Row 1 are stored, and so on.

### Address Calculation Formula (Row-Major):
To find the memory address of element $A[i][j]$ in an array with $C$ columns:

$$\text{Address of } A[i][j] = \text{Base Address} + (i \times C + j) \times \text{Size of one element}$$

* **Base Address**: The starting address of the array ($A[0][0]$).
* **$i$**: Current row index.
* **$C$**: Total number of columns in the array.
* **$j$**: Current column index.
* **Size of one element**: Bytes per element (e.g., 4 bytes for `int`).

#### Example:
If we have `int A[3][3]` starting at base address `1000`, the address of $A[1][2]$ (Row 1, Column 2) is:
* Address $= 1000 + (1 \times 3 + 2) \times 4$
* Address $= 1000 + (5) \times 4 = 1020$

---

## 🔄 Traversal of a 2D Array
To traverse a 2D array, we use **nested loops**:
* The outer loop iterates through the rows ($i$).
* The inner loop iterates through the columns ($j$).

### Time Complexity:
* **Accessing any element**: $O(1)$.
* **Traversing the entire array**: $O(R \times C)$ (where $R$ is rows and $C$ is columns).
