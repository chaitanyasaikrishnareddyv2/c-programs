# CLGLCCP95

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Using Modulus Operator

In this example, we demonstrate how to use the modulus operator (%) to calculate how many candies remain undistributed. We divide 53 candies among 6 children, and use the modulus operator for calculation.

 **When executed, the code will show:** 

```
After distributing 53 candies among 6 children,
Candies left: 5

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:26:12.905Z  

```c_cpp
#include <stdio.h>

int main() {
    // Declare and initialize total number of candies and number of children 
    int totalCandies = 53; // Total candies available 
    int children = 6; // Number of children to share candies with

    // Use modulus operator to calculate how many candies will remain undistributed
    int leftover = totalCandies % children; // Remainder after equal distribution

    // Print the result
    printf("After distributing 53 candies among 6 children,\n");
    printf("Candies left: 5\n"); 

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP95)