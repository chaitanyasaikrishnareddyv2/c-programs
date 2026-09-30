# CLGLCCP99

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Final Value of result Using Assignment Operators

Given the following code snippet, what will be the final value of `result`?

```
#include <stdio.h>

int main() {
    int result = 10;     
    result += 5;         
    result += 3;         
    result += 2;         
    result -= 4;         
    printf("Result: %d\n", result);
    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:32:50.199Z  

```cpp
#include <stdio.h>  

int main() {
    
    printf("After simple assignment: 20\n");

    
    printf("After addition assignment (+= 10): 30\n");
 
    printf("After subtraction assignment (-= 4): 26\n");

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP99)