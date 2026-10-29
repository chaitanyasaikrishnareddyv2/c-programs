# CLGLCCP425

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### MCQ - Output of Function

What will be the output of the following C program?

```
#include <stdio.h>

// Function definition
void performCalculation() {
    int a = 4;
    int b = 5;
    int product = a * b;

    printf("The product is: %d\n", product);
}

int main() {
    performCalculation();  // Function call
    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T18:28:59.505Z  

```cpp
#include <stdio.h>

// Function declaration (prototype)
void printNumber();

int main() {
    printNumber();  // Call the function

    return 0;
}

// Function definition
void printNumber() {
    int value = 10;  // Integer declared inside the function
    printf("The number is: %d\n", value);
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP425)