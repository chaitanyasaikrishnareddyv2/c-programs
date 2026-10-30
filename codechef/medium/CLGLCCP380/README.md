# CLGLCCP380

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Example - Checking for Importan in a Message

In this example, we'll use `strstr()` to check if the word  **"Important"**  appears in a message.
If it does, we’ll print `"The message is important!"`, otherwise, we'll print `"The message is not important!"`.

 **When executed, the code will show:** 

```
The message is not important!

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T16:07:37.873Z  

```c_cpp
#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a message
    char message[] = "This is an important notice for all employees.";

    // Use strstr to find the substring "Important"
    char *result = strstr(message, "Important");

    // Check if the substring "Important" is found
    if (result != NULL) {
        printf("The message is important!\n");
    } else {
        printf("The message is not important!\n");
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP380)