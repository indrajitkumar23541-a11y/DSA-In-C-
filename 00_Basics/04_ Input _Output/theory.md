# Input / Output in C++

In C++, data is read and written using streams, which are sequences of bytes.

Input stream: Data flows from a device (like the keyboard) to the computer’s memory.  
Output stream: Data flows from memory to an output device (like the screen).  

These streams are defined in the <iostream> header file.  

The most common stream objects are - "cin": for taking input and "cout": for displaying output.  

---

## Standard Output Stream - cout

cout is an instance of the ostream class used to display output on the screen.  
Data is sent to cout using the insertion operator <<.

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Indrajit Kumar";
    return 0;
}
```

Output  
Indrajit Kumar   

---

## Standard Input Stream - cin

cin is an instance of the istream class used to read input from the keyboard.  
The extraction operator >> is used with cin to get data from the input stream and store it in a variable.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int age;
    // Taking input from user and store it in variable
    cin >> age;
    
    // Output the entered age
    cout << "Age entered: " << age;
    return 0;
}
```

Output  

18 (Enter by user)  
Age entered: 18  

---

## Un-buffered Standard Error Stream - cerr

cerr is the standard error stream used to display error messages. It is an instance of the ostream class.  

It is an unbuffered output stream used to display error or warning messages immediately, ensuring they appear instantly without any buffering delays like cout  

Note: The main difference between cerr and cout is that cerr is unbuffered, meaning its output is displayed immediately, while cout is buffered and may delay output. Both cerr and cout can be redirected to files; unbuffered does not mean the output cannot be stored in a file.

```cpp
#include <iostream>
using namespace std;

int main()
{
    cerr << "An error occurred";
    return 0;
}
```

Error  

An error occurred  

---

## Buffered Standard Error Stream - clog

clog is the standard logging stream used to display error or log messages. It is an instance of the ostream class, like cerr.  

Messages are first stored in a buffer and displayed only when the buffer is full or explicitly flushed using flush() (Buffered output)  

Useful for logging messages that don’t need to appear immediately on the screen.  

Unlike cerr, output from clog may be delayed due to buffering.  

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Indrajit Kumar";
    return 0;
}
```
