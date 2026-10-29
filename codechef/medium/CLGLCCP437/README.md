# CLGLCCP437

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Finding the Maximum of Two Numbers

Write a C program that takes two integers as input and uses a function to find and return the maximum of the two numbers. The program should then print the maximum number.

 **Input Format:**  Two integers, entered one after the other.

 **Steps to Complete:** 

- Create a function that accepts these two integers as parameters and returns the larger number.
- Print the maximum number in the main function.
### Input Format

Two integers, entered one after the other in a new line.

### Sample 1:
Input
Output

```
8
15

```

```
The maximum number is: 15

```

### Sample 2:
Input
Output

```
20
10

```

```
The maximum number is: 20

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T19:18:12.903Z  

```c_cpp
#include <stdio.h>

// Function declaration
int findMax(int a, int b);

int main() {
    int num1, num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    int max = findmax(num1 ,num2);
    printf("The maximum number is: %d\n",max);
    
    
    return 0;
}

int findmax(int a ,int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP437)