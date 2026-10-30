# CLGLCCP373

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Choose the Correct Output

What will be the output of the following code?

```
#include <stdio.h>

int main() {
    char id[] = "EE1042B";
    char code[3];
    int start = 0;
    int length = 2;

    for (int i = 0; i < length; i++) {
        code[i] = id[start + i];
    }
    code[length] = '\0';

    printf("Code: %s\n", code);

    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T15:34:17.178Z  

```cpp
#include <stdio.h>

int main() {
    // Full student ID
    char studentID[] = "CS2025A9";

    // Array to store the department code (2 characters + null terminator)
    char deptCode[3];

    int start = 0;    // Start from the beginning
    int length = 2;   // Extract 2 characters

    // Extract department code using loop
    for (int i = 0; i < length; i++) {
        deptCode[i] = studentID[start + i];
    }
    deptCode[length] = '\0';  // Add null terminator

    // Print the extracted department code
    printf("Department Code: %s\n", deptCode);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP373)