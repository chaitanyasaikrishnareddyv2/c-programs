# AYXVYX06

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T17:05:27.227Z  

```c_cpp
#include <stdio.h>

#define SIZE 5

int main() {
    int playlist[SIZE];
    int i,last;

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &playlist[i]);
    }
last = playlist[SIZE-1];
    for(i=SIZE-1;i>0;i--)
    {
        playlist[i]=playlist[i-1];
    }
   playlist[0]=last;
   
   
    for (i = 0; i < SIZE; i++) {
        printf("%d ", playlist[i]);
    }
    printf("\n");

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AYXVYX06)