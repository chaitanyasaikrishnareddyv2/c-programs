# CLGLCCP170

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Find the Output

What will be the output of the following C code, considering operator associativity?

```
#include <stdio.h>

int main() {
    int x = 15, y = 7, z = 3;
    
    int temp = z * 3;     
    int temp2 = temp + 5; 

    y = temp2;            
    int result = x;       

    printf("%d\n", result); 
    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T00:22:08.973Z  

```cpp
#include <stdio.h>

int main() {
    int x = 100, y = 150, z = 200;
    
    
    printf("Final Result (Left-to-right): 50\n");  
    printf("Final Result (Right-to-left): 300\n");  

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP170)