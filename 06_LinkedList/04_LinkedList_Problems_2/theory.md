# 🧠 Linked List Problems - Part 2 (Cycle Detection & Removal)

This section covers **Floyd's Cycle Finding Algorithm** (also known as the Tortoise and Hare algorithm) to:
1. **Detect a Cycle/Loop** in a Linked List.
2. **Find the starting node** of the Cycle.
3. **Remove the Cycle** from the Linked List.

---

## 📌 1. Detecting a Cycle

If a Linked List has a loop, traversing it will result in an infinite loop.

### ⚡ Floyd's Cycle Detection Algorithm:
1. Initialize `slow = head` and `fast = head`.
2. Move `slow` by 1 step (`slow = slow->next`) and `fast` by 2 steps (`fast = fast->next->next`).
3. If there is a cycle, `slow` and `fast` will eventually **meet at the same node** (`slow == fast`).
4. If `fast` or `fast->next` becomes `NULL`, there is no cycle.

---

## 📌 2. Finding the Starting Node of the Cycle

Mathematical proof shows that the distance from the `head` node to the start of the loop is equal to the distance from the meeting point (where `slow == fast`) to the start of the loop (modulo loop length).

### ⚡ Algorithm:
1. Find the meeting point using Floyd's algorithm. Let this node be `intersection`.
2. Move `slow` back to `head`, and keep `fast` at `intersection`.
3. Move both `slow` and `fast` **one step at a time** (`slow = slow->next`, `fast = fast->next`).
4. The node where they meet again is the **starting node** of the cycle.

---

## 📌 3. Removing the Cycle

To remove the cycle, we need to find the **last node** of the cycle (the node whose `next` points back to the starting node) and set its `next = NULL`.

### ⚡ Algorithm:
1. Find the starting node of the cycle (let it be `startNode`).
2. Initialize a pointer `temp = startNode`.
3. Traverse the loop: move `temp` forward until `temp->next == startNode`.
4. Set `temp->next = NULL`. The loop is broken!

---

## 📈 Complexity Analysis
- **Time Complexity**: $O(N)$ — Both detection and removal take linear time.
- **Space Complexity**: $O(1)$ — No extra memory is used.
