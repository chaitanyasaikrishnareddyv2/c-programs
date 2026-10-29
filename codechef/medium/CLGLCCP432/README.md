# CLGLCCP432

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Pass By Value with Multiplication

In this example, we demonstrate how pass by value works in C. The function takes a copy of the number, multiplies it by 3 inside the function, but the original number in `main()` remains unchanged.

 **When executed, the code will show:** 

```
Before function call, number = 7
Inside function, multiplied value = 21
After function call, number = 7

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T18:56:16.568Z  

```c_cpp
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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP432)