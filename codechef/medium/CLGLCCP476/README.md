# CLGLCCP476

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T15:54:49.365Z  

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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP476)