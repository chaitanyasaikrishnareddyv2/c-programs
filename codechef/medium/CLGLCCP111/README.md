# CLGLCCP111

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Inventory Management with Post-Increment

Write a C program to update warehouse inventory using arithmetic operations and the post-increment operator, displaying stock values at each stage.

 **Steps to complete:** 

- Add newStock to stock Print: "Stock after receiving new items".
- Subtract damaged from stock Print: "Stock after removing damaged items".
- Display stock before incrementing Print: "Stock after post-increment".
- Display the updated stock value Print: "Final Recorded Stock".

 **Expected output:** 

```
Stock after receiving new items: 150
Stock after removing damaged items: 145
Stock after post-increment: 145
Final Recorded Stock: 146

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:41:33.144Z  

```c_cpp
#include <stdio.h>

int main() {
         
    // Add new stock to current stock
    
    printf("Stock after receiving new items: 150\n");

    // Subtract damaged items from stock
  
    printf("Stock after removing damaged items: 145\n");

    // Use post-increment: print current value, then increment
    printf("Stock after post-increment: 145\n");

    // Final value after increment
    printf("Final Recorded Stock: 146\n");

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP111)