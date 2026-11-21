# CLGLCCP506

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Identify the Correct Member to Access in a Struct

Fill in the blank to correctly access and print the value of the age member of a structure variable.

```
#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

int main() {
    struct Person p1 = {"Ravi", 25};
    printf("Age: %d\n", p1._____);  // Fill the blank
    return 0;
}

```

 **Expected output:** 

```
Age: 25

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T15:53:10.331Z  

```cpp
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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP506)