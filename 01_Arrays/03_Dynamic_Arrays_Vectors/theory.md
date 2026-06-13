# 📈 Dynamic Arrays (std::vector in C++)

## 📌 What is a Dynamic Array?
A standard (static) array has a fixed size that cannot be changed once declared. If you declare `int arr[5]`, you can never store a 6th element.

A **Dynamic Array** is an array that can automatically grow or shrink in size during program execution. In C++, the Standard Template Library (STL) provides **`std::vector`** to implement dynamic arrays.

---

## ⚡ Why Use `std::vector`?

| Feature | Static Array | Vector (Dynamic Array) |
|---|---|---|
| **Size** | Fixed at compile time. | Can grow or shrink at runtime. |
| **Memory Allocation** | Stack memory (usually). | Heap memory (dynamic storage). |
| **Safety** | No boundary checks (risks out-of-bounds error). | Provides functions like `.at()` for safe access. |
| **Tracking** | You must manually track the number of elements. | Automatically tracks size using `.size()`. |

---

## 💾 How Does Vector Resize Under the Hood?
When a vector runs out of space, it automatically manages resizing:
1. It allocates a new, larger block of memory (usually **double (2x)** the current capacity).
2. It copies all existing elements to the new memory block.
3. It deletes the old memory block.
4. It inserts the new element.

Because of this doubling mechanism, doubling happens rarely. Therefore, adding elements at the end has an **amortized time complexity of $O(1)$**.

---

## 🛠️ Common Vector Functions in C++

* `#include <vector>`: You must include this header file.
* `vector<int> v;`: Declares an empty integer vector.
* `v.push_back(value)`: Inserts element at the end.
* `v.pop_back()`: Removes the last element.
* `v.size()`: Returns the number of elements currently stored.
* `v.capacity()`: Returns the total storage capacity allocated in memory.
* `v.clear()`: Removes all elements.
* `v.empty()`: Returns `true` if the vector has no elements.
