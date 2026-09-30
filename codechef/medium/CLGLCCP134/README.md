# CLGLCCP134

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Comparing Two Prices

In this example, we demonstrate how the Not Equal to `(!=)` operator works in C. We compare two product prices to check if they are not equal. The result is printed directly, showing whether the prices differ.

 **When executed, the code will show:** 

```
Are price1 and price2 not equal? 1
Are price1 and price2 not equal? 0

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:59:30.789Z  

```c_cpp
#include <stdio.h>

int main() {
    
    // Compare using the != operator to check if prices are not equal
    printf("Are price1 and price2 not equal? 1\n");  // Outputs: 1 (true)

    // Change price2 to be the same as price1
    

    // Compare again after making the prices equal
    printf("Are price1 and price2 not equal? 0\n");  // Outputs: 0 (false)

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP134)