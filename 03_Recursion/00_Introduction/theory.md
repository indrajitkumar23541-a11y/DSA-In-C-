# 🧠 Introduction to Recursion

## 📌 What is Recursion?
In programming, **Recursion** is a technique where a function calls itself to solve a larger problem by breaking it down into smaller subproblems. 

Think of recursion like a set of nesting Russian dolls: to reach the smallest doll, you must open the larger ones first.

---

## ⚡ Anatomy of a Recursive Function
A valid recursive function MUST contain two main parts:

1. **Base Case (Stopping Condition)**: 
   * This is the condition where the function stops calling itself and returns a simple value.
   * Without a base case, the function will call itself infinitely, causing the program to crash due to a **Stack Overflow**.
2. **Recursive Case**:
   * The part of the function where it calls itself with a smaller or simplified version of the input.

### Example Structure:
```cpp
void recursiveFunction(int n) {
    if (n == 0) { // Base Case
        return;
    }
    // Recursive Case
    recursiveFunction(n - 1);
}
```

---

## 💾 Memory Stack & Stack Overflow
Every time a function is called, a block of memory (called a **Stack Frame**) is created on the compiler's **Call Stack**. This frame stores the function's parameters, local variables, and return address.

* In recursion, new stack frames keep piling up on top of each other until a base case is met.
* Once the base case returns, the frames are popped off the stack one by one.
* If the recursion goes too deep (e.g., no base case or infinite loop), the call stack runs out of memory, resulting in a **Stack Overflow** crash.
