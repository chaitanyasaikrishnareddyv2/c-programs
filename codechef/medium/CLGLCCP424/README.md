# CLGLCCP424

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Internal Integer Variable

In this example, we show how to declare a function with a  **void return type**  that declares and prints an integer value inside the function. The function is declared before `main()` and defined after it, demonstrating the use of function declaration.

 **When executed, the code will show:** 

```
The number is: 10

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T18:28:38.823Z  

```c_cpp
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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP424)