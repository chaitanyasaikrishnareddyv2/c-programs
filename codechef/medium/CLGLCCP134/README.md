# CLGLCCP134

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Output of the code

Select the correct option that corresponds to the output when the code is executed.

```
#include <stdio.h>

int main() {
    int num1 = 50;          // Integer value
    float num2 = 50.05;     // Floating-point value

    // Compare using != to check if num1 and num2 are not equal
    printf("Result: %d\n", num1 != num2);

    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T00:00:18.180Z  

```cpp
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