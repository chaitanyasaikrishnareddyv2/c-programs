# CLGLCCP392

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Choose the Correct Output

What will be the output of the following code?

```
#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "John Doe";
    char initial[3];
    int start = 0;
    int length = 2;

    // Clear the initial array using memset before copying characters
    memset(initial, 0, sizeof(initial));

    // Manually copy the characters from name[] to initial[]
    initial[0] = name[start];
    initial[1] = name[start + 1];
    initial[length] = '\0';

    printf("Initial: %s\n", initial);

    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T17:04:08.520Z  

```cpp
#include <stdio.h>
#include <string.h>

int main() {
    // Initialize a character array with some content
    char buffer[30] = "Reset this text";

    // Print before clearing
    printf("Before clear: %s\n", buffer);

    // Clear the string using memset
    memset(buffer, 0, sizeof(buffer));  // sizeof(buffer) returns the total size of the array in bytes (30 in this case).

    // Print after clearing
    printf("After clear: %s\n", buffer);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP392)