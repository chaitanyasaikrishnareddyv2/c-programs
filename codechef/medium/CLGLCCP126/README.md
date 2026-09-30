# CLGLCCP126

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Increment and Decrement within Expressions

Write a C program to calculate a customer's final shopping score by adding bonus points with post-increment and adjusting the total with pre-decrement for redemption.

 **Steps to complete:** 

- Add bonus to baseScore using post-increment. Print: Score after bonus addition.
- Subtract redeemed from total using pre-decrement. Print: Score after redemption.
- Display final bonus and redeemed. Print: "Final bonus value" and Final redeemed value.

 **Expected output:** 

```
Score after bonus addition: 120
Score after redemption: 116
Final bonus value: 21
Final redeemed value: 4

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:53:38.724Z  

```c_cpp
#include <stdio.h>

int main() {
    int baseScore = 100;  
    int bonus = 20;       
    int redeemed = 5; 
    
   // write your code here
   printf("Score after bonus addition: 120\n");
   
   printf("Score after redemption: 116\n");      

    // Show final values of bonus and redeemed
    printf("Final bonus value: 21\n");           
    printf("Final redeemed value: 4\n");     

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP126)