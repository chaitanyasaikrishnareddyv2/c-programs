# CLGLCCP429

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Fill in the Blank - Void Function for String

Complete the following C program. The function `printLength()` is partially written and should calculate and print the length of a given string. You need to fill in the missing parts inside the function.

 **Expected Output:** 

```
Length of the string is: 21

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T18:39:46.072Z  

```c_cpp
#include <stdio.h>

// Function declaration
void printLength(message);

int main() {
    char message[] = "Hello, C programming!";
    printLength(message);  // Call the function
    return 0;
}

// Function definition
void printLength(char str[]) {
    int length = 0;
    
    // Fill in the code to calculate the string length
    while (str[length]!='\0') {
        length++;
    }
    
    printf("Length of the string is: %d\n", length);
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP429)