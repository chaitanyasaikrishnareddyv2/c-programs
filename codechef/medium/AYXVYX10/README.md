# AYXVYX10

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Sales Performance Matrix

You are a sales manager analyzing your team's performance. The sales data is represented as a 3x3 grid, where each row represents a different salesperson and each column represents a different month. Your task is to write a program that reads this 3x3 matrix and calculates two things:

- The total sales for each salesperson (the sum of each row)
- The total sales for each month (the sum of each column).
### Input Format
- The program will take 9 integers as input, which represent the 3x3 matrix, entered row by row.
### Output Format
- First, print the sum of each of the 3 rows, each on a new line.
- Then, print the sum of each of the 3 columns, each on a new line.
- Follow the format shown in the sample output.
### Sample 1:
Input
Output

```
1 2 3
4 5 6
7 8 9
```

```
Sum of row 0: 6
Sum of row 1: 15
Sum of row 2: 24
Sum of column 0: 12
Sum of column 1: 15
Sum of column 2: 18
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T17:35:24.807Z  

```c_cpp
#include <stdio.h>

int main() {
    int sales[3][3],s;

    // Read the matrix from the user
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &sales[i][j]);
        }
    }

    for(int i=0;i<3;i++)
    {
        s=0;
        for(int j = 0;j<3;j++)
        {
            s=s+sales[i][j];
        }
        printf("Sum of row %d: %d\n",i,s);
    }
   for(int j=0;j<3;j++)
   {
       s=0;
       for(int i =0;i<3;i++)
       {
           s=s+sales[i][j];
       }
       printf("Sum of column %d: %d\n",j,s);
   }
   

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/AYXVYX10)