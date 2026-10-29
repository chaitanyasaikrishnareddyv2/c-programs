# AYXVYX04

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T16:50:37.176Z  

```c_cpp
#include <stdio.h>

int main() {
    int scores[15];
    int even_count = 0;
    int odd_count = 0;
    int i;

    for (i = 0; i < 15; i++) {
        scanf("%d", &scores[i]);
        if(scores[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    
    
        
    

    printf("Even: %d\n", even_count);
    printf("Odd: %d\n", odd_count);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AYXVYX04)