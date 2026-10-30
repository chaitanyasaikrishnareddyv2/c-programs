# CLGLCCP372

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Department Code Extraction

In this example, we simulate a simple student ID parser where we need to extract a department code from a full ID string. The ID `"CS2025A9"` contains the department code at the beginning. We use a loop to extract the first two characters of the ID and store them in a new string.

The substring is created manually using a loop and null-terminated to make it a valid C string.

 **When executed, the code will show:** 

```
Department Code: CS

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T15:33:37.947Z  

```c_cpp
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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP372)