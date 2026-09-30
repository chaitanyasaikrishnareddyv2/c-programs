# CLGLCCP130

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Comparing Integer and Double

You are comparing test scores and grade thresholds. Choose the correct result when comparing the following values.

```
#include <stdio.h>

int main() {
    int testScore = 80;      
    double threshold = 80.0;

    printf("%d\n", testScore == threshold); 

    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:57:35.986Z  

```cpp
#include <stdio.h>

int main() {
    // Bonus points as a float

    // Comparing integers with floating-point numbers
    printf("Is test score equal to grade threshold? 1\n");  // Expected output: 1 (true)

    // Comparing float with integer: test if bonusPoints is equal to 5
    printf("Are bonus points equal to 5? 1\n"); 

    return 0;
}


```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP130)