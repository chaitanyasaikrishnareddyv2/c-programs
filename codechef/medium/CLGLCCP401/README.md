# CLGLCCP401

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Convert Number to String

In this example, we demonstrate how to use the  **`sprintf()`**  function to convert an integer and a floating-point number into their string representations. This is useful when you need to store or manipulate numbers as strings.

 **When executed, the code will show:** 

```
Integer as string: 2025
Float as string: 3.14

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T17:28:17.764Z  

```c_cpp
#include <stdio.h>

int main() {
    int num = 2025;             // Integer number
    double pi = 3.14159;        // Floating-point number
    char strNum[20];            // Array to store integer as string
    char strPi[30];             // Array to store float as string

    // Convert integer to string
    sprintf(strNum, "%d", num);

    // Convert floating-point number to string with 2 decimal places
    sprintf(strPi, "%.2f", pi);

    // Print the converted strings
    printf("Integer as string: %s\n", strNum);
    printf("Float as string: %s\n", strPi);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP401)