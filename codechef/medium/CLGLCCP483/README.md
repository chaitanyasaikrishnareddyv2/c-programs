# CLGLCCP483

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Matrix Subtraction of 3x3 Arrays

This program reads two 3×3 matrices, and your task is to complete the code that subtracts the second matrix from the first element-wise and stores the result.

Complete the matrix subtraction using nested loops so that each element of `result[i][j]` equals `matrixA[i][j] - matrixB[i][j]`.

### Sample 1:
Input
Output

```
1 2 3
4 5 6
7 8 9
9 8 7
6 5 4
3 2 1
```

```
Result Matrix:
-8 -6 -4 
-2 0 2 
4 6 8
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T16:17:07.218Z  

```c_cpp
#include <stdio.h>

int main() {
    // Declare three 3x3 matrices
    int matrixA[3][3], matrixB[3][3], result[3][3];
    
    // Initialize matrixA
    // printf("Enter elements of Matrix A (3x3):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }
    // Initialize matrixB
    // printf("Enter elements of Matrix B (3x3):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            result[i][j] = matrixA[i][j]-matrixB[i][j];
        }
    }
    
    
    // Print the result matrix
    printf("Result Matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}


```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP483)