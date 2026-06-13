# ⚙️ Basic Recursion Patterns

There are two primary ways recursion branches: **Linear Recursion** (making a single call) and **Tree Recursion** (making multiple calls). Let's study them using the two most famous mathematical examples: **Factorial** and **Fibonacci**.

---

## 1. Factorial of a Number (Linear Recursion)
The factorial of a non-negative integer $N$ (denoted as $N!$) is the product of all positive integers less than or equal to $N$.

$$\text{Factorial}(N) = N \times \text{Factorial}(N - 1)$$

### Structure:
* **Base Case**: $0! = 1$ and $1! = 1$
* **Recursive Relation**: $N! = N \times (N-1)!$

Because it makes exactly **one** recursive call per function run, it forms a straight line in memory.
* **Time Complexity**: $O(N)$
* **Space Complexity**: $O(N)$ (due to $N$ stack frames).

---

## 2. Fibonacci Series (Tree Recursion)
The Fibonacci series is a sequence where each number is the sum of the two preceding ones: `0, 1, 1, 2, 3, 5, 8, 13, 21, ...`

$$\text{Fib}(N) = \text{Fib}(N - 1) + \text{Fib}(N - 2)$$

### Structure:
* **Base Cases**: $\text{Fib}(0) = 0$ and $\text{Fib}(1) = 1$
* **Recursive Relation**: $\text{Fib}(N) = \text{Fib}(N-1) + \text{Fib}(N-2)$

Because it makes **two** recursive calls, it splits like branches on a tree (forming a Call Tree).
* **Time Complexity**: $O(2^N)$ (exponential, as it recalculates identical subproblems repeatedly!).
* **Space Complexity**: $O(N)$ (maximum depth of the recursion tree).
