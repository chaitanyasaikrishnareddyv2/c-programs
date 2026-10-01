# KBETLF09

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### The Programmer Swap Trick

A classic programmer's trick is to swap the values of two variables without using a third, temporary variable. This is done using a sequence of arithmetic operations.

Your task is to demonstrate this trick for two integer variables.

### Input Format
- This program does not take any input.
### Output Format
- Your output should display the original and swapped values for integer pair.
### Expected Output

```
--- Integer Swap ---
Original values: a = <value>, b = <value>
Performing swap...
Swapped values:  a = <value>, b = <value>

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T02:34:12.367Z  

```cpp
#include <stdio.h>

int main() {
    int a = 15, b = 25;

    printf("--- Integer Swap ---\n");
    printf("Original values: a = %d, b = %d\n", a, b);
    printf("Performing swap...\n");

    // Swap using arithmetic (no temp variable)
    
    
    

    printf("Swapped values:  a = %d, b = %d\n", a, b);

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/KBETLF09)