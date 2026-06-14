# 🧠 Linked List Problems - Part 1 (Reversal & Middle Node)

This section covers two foundational, highly asked interview questions for Linked Lists:
1. **Reversing a Singly Linked List** (Iterative & Recursive).
2. **Finding the Middle of a Linked List** (Slow & Fast Pointer approach).

---

## 📌 1. Reversing a Singly Linked List

Reversing a linked list means changing the direction of all pointers so that the tail node becomes the new head, and the old head points to `NULL`.

### ⚡ Iterative Approach:
We maintain three pointers:
- `prev` (initially `NULL`)
- `curr` (initially `head`)
- `forward` (initially `NULL` - used to keep track of the remaining list before we cut the link)

**Algorithm:**
1. Loop while `curr != NULL`.
2. Save the next node: `forward = curr->next`.
3. Reverse the pointer direction: `curr->next = prev`.
4. Move `prev` and `curr` one step forward: `prev = curr`, `curr = forward`.
5. Finally, update head: `head = prev`.

### ⚡ Recursive Approach:
1. Base cases: If list is empty or has only one node, return `head` (already reversed).
2. Recursively reverse the rest of the list: `Node* chhotaHead = reverse(head->next)`.
3. Connect the next node back to head: `head->next->next = head`.
4. Set head's next pointer to NULL: `head->next = NULL`.
5. Return the new reversed head: `chhotaHead`.

---

## 📌 2. Finding Middle of a Linked List (Tortoise & Hare Algorithm)

A naive approach is to find the length $N$, then traverse $N/2$ nodes. We can optimize this to a **single pass** using two pointers:

- **Slow Pointer (`slow`)**: Moves 1 step at a time (`slow = slow->next`).
- **Fast Pointer (`fast`)**: Moves 2 steps at a time (`fast = fast->next->next`).

When the `fast` pointer reaches the end of the list (either `fast == NULL` or `fast->next == NULL`), the `slow` pointer will be exactly at the **middle** node.

---

## 📈 Complexity Analysis

| Problem | Time Complexity | Space Complexity |
|---------|-----------------|------------------|
| **Reverse (Iterative)** | $O(N)$ | $O(1)$ |
| **Reverse (Recursive)** | $O(N)$ | $O(N)$ (recursion stack space) |
| **Find Middle Node** | $O(N)$ (Single Pass) | $O(1)$ |
