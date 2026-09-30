# CLGLCCP173

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Evaluating Complex Compound Expressions in C

What will be the output of the following C code?

```
#include <stdio.h>

int main() {
    int a = 5, b = 12, c = 3;
    int result = (a++  *(--b / c)) + ((b % c) - --a*  c);  // Complex compound expression
    printf("%d\n", result);
    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T00:25:20.970Z  

```cpp
#include <stdio.h>

int main() {
    
    printf("The result of the expression is: 12\n");
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP173)