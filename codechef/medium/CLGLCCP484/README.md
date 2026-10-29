# CLGLCCP484

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Sum of Diagonal Elements in 3x3 Matrix

Write a program to input values for a 3×3 matrix from the user. Calculate the sum of the elements on the main diagonal (where the row and column indices are equal) and print the sum.

 **Steps to complete:** 

- Declare a 3×3 matrix.
- Use nested loops to take input for all elements of the matrix.
- Iterate through the matrix to find elements where row index equals column index.
- Calculate the sum of these diagonal elements.
- Print the sum in the format: "Sum of diagonal elements: ".
### Sample 1:
Input
Output

```
2 3 4 5 6 7 8 9 12
```

```
Enter 9 elements:
Sum of diagonal elements: 20
```

### Sample 2:
Input
Output

```
12 13 14 5 2 1 11 2 7
```

```
Enter 9 elements:
Sum of diagonal elements: 21
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T16:26:12.333Z  

```c_cpp
#include <stdio.h>

int main() {
    int sum = 0;
    int a[3][3];
  printf("Enter 9 elements:\n");
   for (int i=0;i<3;i++)
   {
       for(int j = 0;j<3;j++)
       {
           scanf("%d",&a[i][j]);
           if(i==j)
           {
           sum=sum+a[i][j];
       }
   }
}
printf("Sum of diagonal elements: %d",sum);
    return 0;
}


```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP484)