# CLGLCCP106

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### MCQ - Chained Assignments in C

Which of the following code snippets correctly uses chained assignment to assign the value `300` to all three variables `x`, `y`, and `z`?

 **A.** 

```
int x = 300;
int y = 300;
int z = 300;

```

 **B.** 

```
int x, y, z;
x = 300 = y = z;

```

 **C.** 

```
int x, y, z;
x = y;
y = z;
z = 300;

```

 **D.** 

```
int x, y, z;
x = y = z = 300;

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:37:34.410Z  

```cpp
#include <stdio.h>

int main() {
   
    printf("Store 1 Initial Stock: 500 units\n");  // Output: 500
    printf("Store 2 Initial Stock: 500 units\n");  // Output: 500
    printf("Store 3 Initial Stock: 500 units\n");  // Output: 500

    return 0; 
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP106)