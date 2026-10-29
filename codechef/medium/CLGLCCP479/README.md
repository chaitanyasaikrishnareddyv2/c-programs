# CLGLCCP479

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### MCQ - Row major order

What will be the output of the following C code?

```
#include <stdio.h>

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
    }

    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T16:02:34.194Z  

```cpp
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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP479)