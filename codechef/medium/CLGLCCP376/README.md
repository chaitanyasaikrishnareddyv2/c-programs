# CLGLCCP376

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Finding char in an Email

In this example, we'll use the `strchr()` function to find the  **`@` character**  in an email address.
If the character is found, we'll print  **“Character found!”**. Otherwise, we'll print  **“Character not found!”**.

 **When executed, the code will show:** 

```
Character found!

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T15:51:19.563Z  

```c_cpp
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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP376)