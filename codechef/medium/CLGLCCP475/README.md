# CLGLCCP475

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Sum of Elements in a 3x3 Matrix

Complete the following C program by filling in the missing parts:

- Use nested loops to calculate the sum of all elements in the matrix.
### Sample 1:
Input
Output

```
1 1 1 
1 1 1
2 2 2
```

```
Sum of all elements: 12
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T15:54:47.074Z  

```c_cpp

#include <stdio.h>

int main() {
    int matrix[3][3];
    int sum = 0;
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            sum = sum+matrix[i][j];
        }
    }
    
    /* Missing code here */
    
    printf("Sum of all elements: %d\n", sum);
    
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP475)