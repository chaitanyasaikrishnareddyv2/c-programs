# CLGLCCP426

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Print Numbers from 1 to N Using a Void Function

Write a C program that uses a void function to read a number `N` from the user.
The function should check if `N` is positive. If `N` is not positive, it should print `Invalid Input`. If `N` is positive, the function should print all numbers from `1` to `N` using a for loop.

### Sample 1:
Input
Output

```
5
```

```
1
2
3
4
5

```

### Sample 2:
Input
Output

```
-7

```

```
Invalid Input

```

### Sample 3:
Input
Output

```
0
```

```
Invalid Input

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T18:33:09.170Z  

```c_cpp
#include <stdio.h>

// Function declaration
void printNumbers();

int main() {
    // Call the void function
    printNumbers();
    return 0;
}

// Function definition
void printNumbers() {
    
    int n;
    scanf("%d", &n);

    if (n<=0) {
        printf("Invalid Input\n");
    } else {
        
        for(int i=1;i<=n;i++)
        {
            printf("%d\n",i);
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP426)