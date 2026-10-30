# CLGLCCP377

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Finding Character using strchr() in C

A program needs to check if a specific character (e.g., @) is present in an email address without changing the original string. Complete the missing part of the code to achieve this.

```
#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a sample email address
    char email[] = "student@example.com"; // Original email address

    __________; // Use strchr to find the '@' character

    // Check if the character is found and display the result
    if (result != NULL) {
        printf("Character '@' found!\n");
    } else {
        printf("Character '@' not found!\n");
    }

    return 0;
}

```

 **Expected Output:** 

```
Character '@' found!

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T15:51:51.572Z  

```cpp
#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a sample email address
    char email[] = "student@example.com";

    // Use strchr to find the '@' character
    char *result = strchr(email, '@');

    // Check if the character was found
    if (result != NULL) {
        printf("Character found!\n");
    } else {
        printf("Character not found!\n");
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP377)