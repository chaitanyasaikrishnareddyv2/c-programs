# CLGLCCP114

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Pre-Increment in Action

Fill in the blank to correctly use the pre-increment operator in the following code:

```
#include <stdio.h>

int main() {
    int score = 9;
    printf("Updated score: %d\n", __________);
    return 0;
}

```

 **Expected output:** 

```
Updated score: 10

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:42:58.438Z  

```cpp
#include <stdio.h>

int main() {
    int level = 3;  // Initial player level

    // Pre-increment: increase level first, then display
    printf("Player leveled up to: 4\n");
    printf("Current level: 4\n");

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP114)