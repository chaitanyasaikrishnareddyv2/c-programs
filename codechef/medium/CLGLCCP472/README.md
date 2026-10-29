# CLGLCCP472

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Classroom Test Scores Matrix

Write a program that creates a 3x3 matrix to store test scores for 3 students across 3 subjects. After inputting the data, the program should display the matrix in a readable format without using loops.

Input: Nine integers representing the test scores of the students in 3 subjects.

### Sample 1:
Input
Output

```
78 82 85
90 88 92
84 79 80
```

```
Classroom Test Scores:
78 82 85
90 88 92
84 79 80
```

### Sample 2:
Input
Output

```
10 12 25
22 90 75
12 14 12
```

```
Classroom Test Scores:
10 12 25
22 90 75
12 14 12
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T15:50:14.416Z  

```c_cpp
#include <stdio.h>

int main() {
    // Declare a 3x3 matrix to store students' test scores
    int scores[3][3];

    // Step 1: Take user input for the matrix
    scanf("%d %d %d",&scores[0][0],&scores[0][1],&scores[0][2]);
  scanf("%d %d %d",&scores[1][0],&scores[1][1],&scores[1][2]);
  scanf("%d %d %d",&scores[2][0],&scores[2][1],&scores[2][2]);

    // Step 2: Print the matrix in a readable format without using loops
    printf("Classroom Test Scores:\n");
    printf("%d %d %d\n",scores[0][0],scores[0][1],scores[0][2]);
    printf("%d %d %d\n",scores[1][0],scores[1][1],scores[1][2]);
    printf("%d %d %d\n",scores[2][0],scores[2][1],scores[2][2]);
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP472)