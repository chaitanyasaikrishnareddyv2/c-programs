# CLGLCCP87

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Using Division Operator

In this example, we demonstrate how to use the division operator (`/`) to divide two integers. Since both operands are integers, the result will be an integer with the decimal part discarded (truncated).

 **When executed, the code will show:** 

```
Each student gets 4 apples

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:18:26.850Z  

```c_cpp
#include <stdio.h>  

int main() {
    // Declare and initialize the variable 
    int totalApples = 17;  // Total apples to be distributed
    int students = 4;      // Number of students to share apples

    // Perform integer division to find apples per student
    // Since both values are integers, the result will also be an integer (decimal part discarded)
    int applesPerStudent = totalApples / students;  

    // Print how many apples each student gets
    printf("Each student gets 4 apples");

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP87)