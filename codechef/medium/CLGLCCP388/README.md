# CLGLCCP388

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Problem - File Path Processing

A system is designed to extract the first word from a sentence. Complete the missing part of the code to copy the first word from the source sentence to the destination string. The word is defined as the part of the sentence before the first space.

```
#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a source sentence
    char source[] = "Welcome to the world of C programming!";
    
    // Declare a destination string with enough space
    char destination[10];

    // Use strncpy to copy the first word from source to destination
    ________; // Copy first word from source to destination

    // Print the copied word
    printf("First word: %s\n", destination);
    
    return 0;
}

```

 **Expected Output:** 

```
First word: Welcome

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T16:51:39.460Z  

```cpp
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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP388)