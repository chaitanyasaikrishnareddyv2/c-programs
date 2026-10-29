# CLGLCCP476

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Count Even Numbers in a 3x3 Matrix

Write a program to input a 3x3 integer matrix, count how many numbers are even, and print the count.

 **Steps to complete:** 

- Use nested loops to read 9 integers into the matrix.
- Use nested loops to check each element for evenness.
- Maintain and increment a count variable for each even number found.
- Print the total count of even numbers after checking all elements.
### Sample 1:
Input
Output

```
2 4 6 
7 8 9 
5 3 1 
```

```
Total even numbers: 4
```

### Sample 2:
Input
Output

```
20 31 88
929 199 112
123 89 27
```

```
Total even numbers: 3
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T16:00:36.820Z  

```c_cpp
#include <stdio.h>

int main() {
    int matrix[3][3];  
    int c = 0;    
    
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             scanf("%d",&matrix[i][j]);
             if(matrix[i][j]%2==0)
             {
                 c++;
             }
             
         }
     }// write your code here
   printf("Total even numbers: %d",c);
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP476)