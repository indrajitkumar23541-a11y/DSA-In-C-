# 🧠 Circular Linked List

A **Circular Linked List** is a variation of a linked list in which the last node points back to the first node, forming a closed loop. There is **no NULL pointer** at the end of the list.

It can be implemented as either a Singly Circular Linked List or a Doubly Circular Linked List.

```
       ┌────────────────────────────────────────────────────────┐
       │                                                        │
       ▼                                                        │
┌──────────┬──────┐       ┌──────────┬──────┐       ┌──────────┬┴─────┐
│  Data1   │ Next ├──────►│  Data2   │ Next ├──────►│  Data3   │ Next │
└──────────┴──────┘       └──────────┴──────┘       └──────────┴──────┘
```

---

## ⚡ Key Properties & Advantages

1. **Circular Traversal**: Any node can be used as a starting point. We can traverse the entire list starting from any arbitrary node.
2. **Infinite Loops**: Since the last node points to the first node, traversing without a stop condition will result in an infinite loop.
3. **Use Cases**: Circular Lists are ideal for applications that require a round-robin cycle, such as:
   - Operating System process scheduling (Round-Robin CPU Scheduling).
   - Multiplayer games where turns rotate in a circle.
   - Buffers and circular queues.

---

## ⚡ Traversing a Circular Linked List
In a Singly Linked List, we stop traversing when the pointer becomes `NULL`. In a Circular Linked List:
- We store the starting node (usually `head`).
- We traverse to the next nodes using a `do-while` loop.
- We stop when we reach the starting node again (`temp == head`).

---

## 📈 Time Complexity

| Operation | Singly Linked List | Circular Linked List |
|-----------|--------------------|----------------------|
| **Access (Get $i$-th)** | $O(N)$ | $O(N)$ |
| **Insert at Beginning**| $O(1)$ | $O(N)$ (must traverse to last node to update its pointer to new head, or $O(1)$ if tail pointer is maintained) |
| **Insert at End** | $O(N)$ (without tail) | $O(N)$ (without tail) |
| **Delete from Beginning**| $O(1)$ | $O(N)$ (must find last node to update next pointer) |
