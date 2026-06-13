# 🏆 Standard Recursion Practice Problems

This folder contains standard practice problems that help build your recursive thinking.

---

## 1. Sum of Digits of a Number
### Problem Statement:
Given an integer `N`, find the sum of its digits recursively.

### Example:
* **Input**: `1234`
* **Output**: `10` (since $1 + 2 + 3 + 4 = 10$).

### Recurrence Relation:
* Last Digit $= N \% 10$
* Remaining Digits $= N / 10$
* **Formula**: $\text{Sum}(N) = (N \% 10) + \text{Sum}(N / 10)$
* **Base Case**: If $N < 10$, return $N$ (since it is a single-digit number).

---

## 2. Power Function ($X^N$)
### Problem Statement:
Write a recursive function to calculate the value of $X$ raised to the power $N$ ($X^N$).

### Example:
* **Input**: $X = 2$, $N = 5$
* **Output**: `32` (since $2^5 = 32$).

### Recurrence Relation:
1. **Simple Approach ($O(N)$)**:
   * $\text{Power}(X, N) = X \times \text{Power}(X, N - 1)$
   * **Base Case**: If $N == 0$, return $1$ (since $X^0 = 1$).
2. **Binary Exponentiation ($O(\log N)$ - Highly Optimized)**:
   * If $N$ is even: $X^N = (X^{N/2})^2$
   * If $N$ is odd: $X^N = X \times (X^{N/2})^2$
