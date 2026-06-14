# 🧠 Singly Linked List

A **Linked List** is a dynamic, linear data structure. Unlike arrays, elements (called **Nodes**) in a linked list are **not stored at contiguous memory locations**. Instead, elements are linked using pointers.

A **Singly Linked List** is a sequence of nodes where each node has two fields:
1. **Data**: Stores the value of the node.
2. **Next Pointer**: Stores the memory address of the next node in the list.

The first node of the list is called the **Head**. The last node's next pointer points to `NULL` (indicating the end of the list).

---

## ⚡ Memory Representation
An array needs a contiguous block of memory, which can lead to allocation failures if free memory is fragmented. A Linked List can allocate nodes anywhere in the memory dynamically using heap allocation (`new` in C++).

```
[ Head ]
   │
   ▼
┌───────┬──────┐       ┌───────┬──────┐       ┌───────┬──────┐
│ Data1 │ Next ├──────►│ Data2 │ Next ├──────►│ Data3 │ NULL │
└───────┴──────┘       └───────┴──────┘       └───────┴──────┘
```

---

## 📌 Node Representation in C++

```cpp
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int val) {
        data = val;
        next = NULL;
    }
};
```

---

## ⚡ Basic Operations

1. **Insertion**:
   - **At Head**: Insert a new node at the very beginning of the list ($O(1)$ time).
   - **At Tail**: Insert a new node at the end of the list ($O(N)$ time, or $O(1)$ if tail pointer is maintained).
   - **At Position**: Insert a new node at a specific index $K$ ($O(N)$ time).
2. **Deletion**:
   - Delete a node by value or by position by adjusting the previous node's next pointer ($O(N)$ time).
3. **Traversal**:
   - Visit every node in the list starting from the head until the pointer becomes `NULL`.

---

## 📈 Time Complexity

| Operation | Array (Static) | Singly Linked List |
|-----------|----------------|--------------------|
| **Access (Get $i$-th)** | $O(1)$ | $O(N)$ (must traverse from head) |
| **Insert at Beginning**| $O(N)$ (requires shifting) | $O(1)$ |
| **Insert at End** | $O(1)$ (if size < capacity) | $O(N)$ (without tail pointer) |
| **Delete from Beginning**| $O(N)$ (requires shifting) | $O(1)$ |
| **Delete from End** | $O(1)$ | $O(N)$ (must find second-to-last node) |
