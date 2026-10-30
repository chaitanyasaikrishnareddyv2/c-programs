# CLGLCCP395

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### MCQ - String Case Conversion

What will be the output of the following C program, which converts a string to uppercase and then back to lowercase?

```
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[] = "Welcome to C Programming";  // Predefined string

    // Convert the string to uppercase
    for (int i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }

    // Convert the string back to lowercase
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }

    // Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T17:09:14.452Z  

```cpp
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";  // Predefined string

    // Print the original string
    printf("Original string: %s\n", str);

    // Convert the string to uppercase
    for (int i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);  // Convert each character to uppercase
    }

    // Print the uppercase string
    printf("Uppercase string: %s\n", str);

    // Convert the string back to lowercase
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);  // Convert each character to lowercase
    }

    // Print the lowercase string
    printf("Lowercase string: %s\n", str);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP395)