# CLGLCCP394

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Converting a Whole String

In this example, we demonstrate how to convert a whole string into uppercase and then into lowercase using  **`toupper()`**  and  **`tolower()`**.

 **When executed, the code will show:** 

```
Original string: Hello, World!
Uppercase string: HELLO, WORLD!
Lowercase string: hello, world!

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T17:08:38.228Z  

```c_cpp
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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP394)