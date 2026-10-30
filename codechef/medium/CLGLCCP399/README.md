# CLGLCCP399

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T17:38:25.359Z  

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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP399)