# NHOMJL07

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Dual Item Price Formatter

You are building a  **display system**  for a cash register.

When two items are scanned, their prices must be shown  **side-by-side**  in a clean, readable format:

- Both prices are shown with exactly two decimal places.
- The display format is: Item1: Rs.XX.XX | Item2: Rs.YY.YY

To accomplish this, your task is to:

- Read two floating-point numbers (the item prices).
- Use sprintf() to format and combine the values into a single string.
- Print the final formatted string.
### Input Format
- A single line containing two floating-point numbers A and B separated by a space.
### Output Format
- A single line containing the final formatted string.
### Sample 1:
Input
Output

```
49.99 105.5
```

```
Item1: Rs.49.99 | Item2: Rs.105.50
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T19:33:26.432Z  

```c_cpp
#include <stdio.h>
#include <string.h>

int main() {
    float price1, price2;
    scanf("%f %f", &price1, &price2);
    
    // Code here 
    char final_output[100];
    sprintf(final_output,"Item1: rs.%.2f | Item2: Rs.%.2f",price1,price2);
    
    
    
    printf("%s\n", final_output);
    
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/NHOMJL07)