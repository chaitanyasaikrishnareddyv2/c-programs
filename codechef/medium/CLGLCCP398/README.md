# CLGLCCP398

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Converting Strings to Numbers

In this example, we demonstrate how to convert numeric strings into integer and floating-point numbers using the standard C library functions `atoi()` and `atof()`. These functions are useful for converting user input or string data into numeric types for further processing.

 **When executed, the code will show:** 

```
Integer value: 12345
Floating-point value: 98.76

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T17:38:24.101Z  

```c_cpp
#include <stdio.h>
#include <stdlib.h>  // Required for atoi() and atof()

int main() {
    char intStr[] = "12345";       // String representing an integer
    char floatStr[] = "98.76";     // String representing a floating-point number

    // Convert string to integer
    int intValue = atoi(intStr);

    // Convert string to floating-point number
    double floatValue = atof(floatStr);

    // Print the converted values
    printf("Integer value: %d\n", intValue);
    printf("Floating-point value: %.2f\n", floatValue);

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP398)