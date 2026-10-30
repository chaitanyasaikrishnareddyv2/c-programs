# CLGLCCP391

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Clearing a String with memset()

In this example, we'll use the `memset()` function to clear a character array that initially contains a sentence.

After clearing, we'll check if the string is empty by printing it. Since all characters are set to `'\0'`, nothing will be displayed.

 **When executed, the code will show:** 

```
Before clear: Reset this text
After clear:

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T17:02:20.973Z  

```c_cpp
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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP391)