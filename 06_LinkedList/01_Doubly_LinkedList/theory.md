# 🧠 Doubly Linked List

A **Doubly Linked List (DLL)** is a more complex type of linked list in which each node contains a pointer to the **previous** node as well as the **next** node.

```
       [ Head ]
          │
          ▼
     ┌────┴────┬──────┬──────┐       ┌──────┬──────┬──────┐       ┌──────┬──────┬──────┐
NULL ◄───┤ Prev │ Data │ Next ├─────►│ Prev │ Data │ Next ├─────►│ Prev │ Data │ Next ├───► NULL
     └─────────┴──────┴──────┘       └──────┴──────┴──────┘       └──────┴──────┴──────┘
```

---

## 📌 Node Representation in C++

```cpp
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
```

---

## ⚡ Advantages of Doubly Linked List

1. **Bi-directional Traversal**: Can be traversed in both forward (head to tail) and backward (tail to head) directions.
2. **Easier Deletion**: The delete operation is more efficient if the node to be deleted is given. We don't need to traverse to find the previous node because we can access it directly via `temp->prev`.
3. **Insert Before Node**: Easily insert a new node before a given node in $O(1)$ time.

---

## ⚡ Disadvantages of Doubly Linked List

1. **Extra Memory**: Each node requires space for an extra pointer (`prev`).
2. **Complexity**: Operations (insertion, deletion) are slightly more complex because they require updating more pointers (both `next` and `prev` pointers of adjacent nodes).

---

## 📈 Time Complexity

| Operation | Singly Linked List | Doubly Linked List |
|-----------|--------------------|--------------------|
| **Access (Get $i$-th)** | $O(N)$ | $O(N)$ |
| **Insert at Beginning**| $O(1)$ | $O(1)$ |
| **Insert at End** | $O(N)$ (without tail ptr) | $O(N)$ (without tail ptr) |
| **Delete Node (given ptr)**| $O(N)$ (must find prev) | $O(1)$ (direct access to prev via `node->prev`) |
