# CLGLCCP505

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Accessing Structure Members

A bookstore system stores each book's title and page count. To display this data, it accesses the structure members using the dot (.) operator.

 **When executed, the code will show:** 

```
Book Title: The Art of C Programming
Total Pages: 450

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T15:52:34.084Z  

```c_cpp
#include <stdio.h>

// Define a structure to represent book details
struct Book {
    char title[50];
    int pages;
};

int main() {
    // Declare and initialize a structure variable
    struct Book b1 = {"The Art of C Programming", 450};

    // Access and display structure members using the dot operator
    printf("Book Title: %s\n", b1.title);
    printf("Total Pages: %d\n", b1.pages);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP505)