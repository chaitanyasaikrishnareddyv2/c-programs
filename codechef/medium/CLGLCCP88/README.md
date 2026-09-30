# CLGLCCP88

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Identify the Correct Use of the Division Operator

Which of the following code snippets correctly perform integer division and print the result without any decimal part?

 **A.** 

```
int a = 15, b = 4;
int result = a / b;
printf("%d", result);

```

 **B.** 

```
int a = 15, b = 4;
printf("%d", a / b);

```

 **C.** 

```
int a = 15, b = 4;
int result = a / b;
printf("%f", result);

```

 **D.** 

```
int a = 15, b = 4;
result = a / b;
printf("%d", result);

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:19:12.204Z  

```cpp
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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP88)