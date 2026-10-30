# CLGLCCP387

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Copying a Partial Product Code

In this example, we'll use `strncpy()` to copy a portion of a product code from a source string into a destination string. We will copy the first 12 characters of the product code string into the destination string.
If the copied string is shorter than the specified length, the remaining characters in the destination string will be padded with `'\0'`. We will then print the result.

 **When executed, the code will show:** 

```
Copied product code: ABC123-XYZ45

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T16:51:02.168Z  

```c_cpp
#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a product code string
    char productCode[] = "ABC123-XYZ456";
    
    // Declare a destination string with enough space
    char destination[20];

    // Use strncpy to copy the first 12 characters from productCode to destination
    strncpy(destination, productCode, 12);
    
    // Manually null-terminate the destination string
    destination[12] = '\0';

    // Print the copied part of the product code
    printf("Copied product code: %s\n", destination);
    
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP387)