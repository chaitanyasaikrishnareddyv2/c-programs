# CLGLCCP478

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Row-major and Column-major Traversal

In this example, we demonstrate how to traverse and print the elements of a 3x3 integer array using both row-major and column-major order. This helps understand how the data is stored and accessed in C.

 **When executed the code will show:** 

```
Row-major traversal:
11 22 33 
44 55 66 
77 88 99 

Column-major traversal:
11 44 77 
22 55 88 
33 66 99 

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T16:01:40.858Z  

```c_cpp
#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {11, 22, 33},
        {44, 55, 66},
        {77, 88, 99}
    };

    // Row-major traversal: Print row by row
    printf("Row-major traversal:\n");
    for (int i = 0; i < 3; i++) {          // Iterate over rows
        for (int j = 0; j < 3; j++) {      // Iterate over columns
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Column-major traversal: Print column by column
    printf("\nColumn-major traversal:\n");
    for (int j = 0; j < 3; j++) {          // Iterate over columns
        for (int i = 0; i < 3; i++) {      // Iterate over rows
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP478)