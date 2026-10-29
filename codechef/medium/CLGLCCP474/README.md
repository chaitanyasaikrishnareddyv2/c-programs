# CLGLCCP474

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Iterating 2D Arrays with Nested Loops

In this example, we demonstrate iterating over a 2D array in C using nested loops, which is essential for searching, modifying, and displaying matrix data in algorithms and data processing.

 **When executed, the code will show:** 

```
Iterating over a 3x3 matrix:
Row 1: 12 24 36 
Row 2: 48 60 72 
Row 3: 84 96 108 

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T15:51:50.397Z  

```c_cpp
#include <stdio.h>

int main() {
    // Define a 3x3 matrix with predefined values
    int matrix[3][3] = {
        {12, 24, 36},  // Initialize row 1 of the matrix
        {48, 60, 72},  // Initialize row 2 of the matrix
        {84, 96, 108}  // Initialize row 3 of the matrix
    };

    // Print header indicating matrix iteration start
    printf("Iterating over a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {                  // Loop over each row
        printf("Row %d: ", i + 1);                 // Print the row number
        for (int j = 0; j < 3; j++) {              // Loop over each column in the row
            printf("%d ", matrix[i][j]);           // Print each element followed by space
        }
        printf("\n");                               // Move to next line after each row
    }

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP474)