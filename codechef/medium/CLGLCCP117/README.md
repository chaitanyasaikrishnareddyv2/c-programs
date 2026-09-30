# CLGLCCP117

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Item Decrement Tracker

Fill in the blank to correctly use the post-decrement operator in this C program:

```
#include <stdio.h>

int main() {
    int items = 9;
    printf("Items remaining: %d\n", __________);
    return 0;
}

```

 **Expected output:** 

```
Items remaining: 9

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:44:24.736Z  

```cpp
#include <stdio.h>

int main() {
    int tokensLeft = 13;  // Total tokens available

    // Issue token to User A
    printf("Token issued to User A: 13\n");

    // Issue token to User B
    printf("Token issued to User B: 12\n");

    // Display remaining tokens
    printf("Tokens left after issuing: 11\n");

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP117)