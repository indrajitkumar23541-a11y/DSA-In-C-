# 🧠 Introduction to C++

## 📌 What is C++?
C++ is a general-purpose programming language developed by Bjarne Stroustrup as an extension of the C language.
It combines features of both high-level and low-level programming, making it suitable for system-level programming as well as application development.

C++ is widely used in areas such as:
- Game Development  
- Operating Systems  
- Embedded Systems  
- High-Performance Applications  

---

## 🔥 Key Features of C++

### 🟢 Object-Oriented Programming (OOP)
C++ supports classes, inheritance, polymorphism, and encapsulation, enabling the creation of modular and reusable code.

---

### 🟢 Low-Level Access
It allows direct manipulation of hardware and memory, making it ideal for system programming.

---

### 🟢 Cross-Platform
C++ code can run on multiple platforms with minimal changes, provided a suitable compiler is available.

---

### 🟢 High Performance
C++ is known for its fast execution speed, making it a preferred choice for performance-critical applications.

---

## 💻 Basic Structure of a C++ Program

```cpp
#include <iostream> // Include the input/output stream library
using namespace std; // Use the standard namespace

int main() {
   cout << "Hello, World!"; // Print "Hello, World!" to the console
   return 0; // Indicate successful program termination
}

---

🔍 Explanation
#include <iostream>
This line includes the input/output stream library, which is necessary to use cout and cin for input and output operations.
using namespace std;
This allows us to use standard library features like cout and cin directly, without writing std::cout or std::cin.
int main()
This is the main function where the execution of every C++ program begins.
cout << "Hello, World!";
This statement prints the text "Hello, World!" to the console using the output stream.
return 0;
This indicates that the program has executed successfully and terminates normally.


🎯 Why Learn C++?
While C++ is powerful, it requires careful memory management as it does not have automatic garbage collection like Python or Java.

However, modern C++ standards (e.g., C++11, C++17, C++20) have introduced features like:

Smart pointers
Lambda expressions

These features help simplify development and make coding more efficient.