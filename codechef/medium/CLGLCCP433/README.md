# CLGLCCP433

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### MCQ - Understanding Pass By Value in C

What will be the output of the following C program?

```
#include <stdio.h>

// Function declaration
void modifyValues(int x, int y);

int main() {
    int a = 3;
    int b = 7;

    printf("Before function call: a = %d, b = %d\n", a, b);

    modifyValues(a, b);

    printf("After function call: a = %d, b = %d\n", a, b);

    return 0;
}

// Function definition
void modifyValues(int x, int y) {
    x = x + 5;
    y = y * 2;
    printf("Inside function: x = %d, y = %d\n", x, y);
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T18:58:38.479Z  

```cpp
#include <stdio.h>

// Function declaration
void multiplyByThree(int num);

int main() {
    int number = 7;

    printf("Before function call, number = %d\n", number);

    multiplyByThree(number);  // Pass a copy of number

    printf("After function call, number = %d\n", number);

    return 0;
}

// Function definition
void multiplyByThree(int num) {
    num = num * 3;  // Modify the local copy
    printf("Inside function, multiplied value = %d\n", num);
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP433)