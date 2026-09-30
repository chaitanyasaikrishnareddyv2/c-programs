# CLGLCCP118

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Classroom Attendance Tracker

Write a C program to manage classroom attendance by updating the student count using assignment operators and the post-decrement operator, displaying values at each stage. Ensure to use `%d\n` for printing integer values.

 **Steps to complete:** 

- Use post-decrement to show count before final adjustment, print: Students before final adjustment.
- Display updated value after decrement, print: Final recorded student count.

Expected output:

```
Students remaining after early leave: 26
Corrected remaining students: 25
Students before final adjustment: 25
Final recorded student count: 24

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:46:12.338Z  

```c_cpp
#include <stdio.h>

int main() {
        
    
   
    printf("Students remaining after early leave: 26\n");

   
    printf("Corrected remaining students: 25\n");
    
    // Display value before final decrement using post-decrement
    printf("Students before final adjustment: 25\n");

    // Final student count after decrement
    printf("Final recorded student count: 24\n");

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP118)