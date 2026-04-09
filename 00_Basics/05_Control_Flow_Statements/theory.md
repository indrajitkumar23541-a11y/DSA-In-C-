# Control flow statements in Programming

Last Updated : 23 Jul, 2025

Control flow refers to the order in which statements within a program execute. While programs typically follow a sequential flow from top to bottom, there are scenarios where we need more flexibility. This article provides a clear understanding about everything you need to know about Control Flow Statements.

## Table of Content

- What are Control Flow Statements in Programming?
- Types of Control Flow statements in Programming
- Conditional Statements in Programming
- Looping Statements in Programming
- Jump Statements in Programming

## What are Control Flow Statements in Programming?

Control flow statements are fundamental components of programming languages that allow developers to control the order in which instructions are executed in a program. They enable execution of a block of code multiple times, execute a block of code based on conditions, terminate or skip the execution of certain lines of code, etc.

## Types of Control Flow statements in Programming:

| Control Flow Statements Type | Control Flow Statement | Description |
|----------------------------|-----------------------|-------------|
| Conditional Statements | if-else | Executes a block of code if a specified condition is true, and another block if the condition is false. |
|  | switch-case | Evaluates a variable or expression and executes code based on matching cases. |
| Looping Statements | for | Executes a block of code a specified number of times, typically iterating over a range of values. |
|  | while | Executes a block of code as long as a specified condition is true. |
|  | do-while | Executes a block of code once and then repeats the execution as long as a specified condition is true. |
| Jump Statements | break | Terminates the loop or switch statement and transfers control to the statement immediately following the loop or switch. |
|  | continue | Skips the current iteration of a loop and continues with the next iteration. |
|  | return | Exits a function and returns a value to the caller. |
|  | goto | Transfers control to a labeled statement within the same function. (Note: goto is generally discouraged due to its potential for creating unreadable and error-prone code.) |

## Conditional Statements in Programming:

Conditional statements in programming are used to execute certain blocks of code based on specified conditions. They are fundamental to decision-making in programs. Here are some common types of conditional statements:

### 1. If Statement in Programming:

The if statement is used to execute a block of code if a specified condition is true.

```cpp
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    if (a == 5) {
        cout << "a is equal to 5";
    }
    return 0;
}
```

Output  
a is equal to 5

---

### 2. if-else Statement in Programming:

The if-else statement is used to execute one block of code if a specified condition is true, and another block of code if the condition is false.

```cpp
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    if (a == 5) {
        cout << "a is equal to 5";
    }
    else {
        cout << "a is not equal to 5";
    }
    return 0;
}
```

Output  
a is not equal to 5

---

### 3. if-else-if Statement in Programming:

The if-else-if statement is used to execute one block of code if a specified condition is true, another block of code if another condition is true, and a default block of code if none of the conditions are true.

```cpp
#include <iostream>
using namespace std;
int main()
{
    int a = 15;
    if (a == 5) {
        cout << "a is equal to 5";
    }
    else if (a == 10) {
        cout << "a is equal to 10";
    }
    else {
        cout << "a is not equal to 5 or 10";
    }
    return 0;
}
```

Output  
a is not equal to 5 or 10

---

### 4. Ternary Operator or Conditional Operator in Programming:

In some programming languages, a ternary operator is used to assign a value to a variable based on a condition.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << (a == 5 ? "a is equal to 5"
                    : "a is not equal to 5");
    return 0;
}
```

Output  
a is not equal to 5

---

### 5. Switch Statement in Programming:

In languages like C, C++, and Java, a switch statement is used to execute one block of code from multiple options based on the value of an expression.

```cpp
#include <iostream>
using namespace std;
int main()
{
    int a = 15;
    switch (a) {
    case 5:
        cout << "a is equal to 5";
        break;
    case 10:
        cout << "a is equal to 10";
        break;
    default:
        cout << "a is not equal to 5 or 10";
    }
    return 0;
}
```

Output  
a is not equal to 5 or 10

Each programming language may have its own syntax and specific variations of these conditional statements.

---

## Looping Statements in Programming:

Looping statements, also known as iteration or repetition statements, are used in programming to repeatedly execute a block of code.

### 1. For Loop in Programming:

```cpp
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }
    return 0;
}
```

Output  
0  
1  
2  
3  
4  

---

### 2. While Loop in Programming:

```cpp
#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    while (count < 5) {
        cout << count << endl;
        count++;
    }
    return 0;
}
```

Output  
0  
1  
2  
3  
4  

---

### 3. Do-while Loop in Programming:

```cpp
#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    do {
        cout << count << endl;
        count++; 
    } while (count < 5);
    return 0;
}
```

Output  
0  
1  
2  
3  
4  

---

### 4. Nested Loops in Programming:

```cpp
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "i=" << i << " j=" << j << "\n";
        }
    }
}
```

Output  
i=0 j=0  
i=0 j=1  
i=1 j=0  
i=1 j=1  

---

## Jump Statements in Programming:

### 1. Break Statement in Programming:

```cpp
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++) {
        if (i == 5)
            break;
        cout << i << " ";
    }
    return 0;
}
```

Output  
0 1 2 3 4  

---

### 2. Continue Statement in Programming:

```cpp
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 1)
            continue;
        cout << i << " ";
    }
    return 0;
}
```

Output  
0 2 4 6 8  

---

### 3. Return Statement in Programming:

```cpp
#include <iostream>
using namespace std;
bool isEven(int N) { return N % 2 == 0; }
int main()
{
    int N = 5;
    if (isEven(N)) {
        cout << "N is even";
    }
    else {
        cout << "N is odd";
    }
    return 0;
}
```

Output  
N is odd  

---

### 4. Goto Statement in Programming:

```cpp
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
loopStart:
    if (i < 5) {
        cout << i << " ";
        i++;
        goto loopStart;
    }
    return 0;
}
```

Output  
0 1 2 3 4  