# AYXVYX08

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Inventory Data Duplication

You are working on an inventory management system. You have a list of 8 product IDs stored in an array. Before performing any operations on this list, you need to create an exact duplicate for backup purposes.

Your task is to read 8 integers representing product IDs from the user, store them in an array, and then use the `memcpy()` function to create a complete copy of this array in a second array. Finally, print the elements of the newly created (copied) array.

### Input Format
- A single line containing 8 space-separated integers.
### Output Format
- A single line containing the 8 integers from the copied array, separated by spaces.
### Sample 1:
Input
Output

```
101 202 303 404 505 606 707 808
```

```
101 202 303 404 505 606 707 808
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T17:18:35.093Z  

```c_cpp
#include <stdio.h>
#include <string.h>

#define SIZE 8

int main() {
    int original_ids[SIZE];
    int copied_ids[SIZE];
    int i;

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &original_ids[i]);
    }

    memcpy(copied_ids,original_ids,sizeof(original_ids));



    for (i = 0; i < SIZE; i++) {
        printf("%d ", copied_ids[i]);
    }
    printf("\n");

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AYXVYX08)