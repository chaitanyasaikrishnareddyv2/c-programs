# CLGLCCP480

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Print matrix elements column-wise

Write a C program to input 9 integers into a 3x3 matrix. Then calculate and print the sum of all elements twice:

- By traversing the matrix in row-major order (row by row).
- By traversing the matrix in column-major order (column by column).

 **Steps to complete:** 

- Use nested loops for row-major traversal: For each element matrix[i][j], add its value to sum_row using sum_row += matrix[i][j];
- Use nested loops for column-major traversal: For each element matrix[i][j], add its value to sum_col using sum_col += matrix[i][j];
- Print both sums using printf.
### Sample 1:
Input
Output

```
2 5 7
3 1 9
8 5 6
```

```
Sum by row-major traversal: 46
Sum by column-major traversal: 46
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T16:09:56.426Z  

```c_cpp
#include <stdio.h>

int main() {
    int matrix[3][3];
    int sum_row = 0, sum_col = 0;

    // Input 9 elements into the matrix (row-wise)
    for (int i = 0; i < 3; i++) {            
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]); 
            sum_row += matrix[i][j];
        }
    }
    for(int j=0; j<3;j++)
    {
        for(int i = 0;i<3;i++)
        {
            sum_col += matrix[i][j];
        }
    }

    printf("Sum by row-major traversal: %d\n",sum_row);
    printf("Sum by column-major traversal: %d",sum_col);
    // write your code here

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP480)