# CLGLCCP116

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Token Countdown System

In this example, we demonstrate a token countdown system. Each time a user is issued a token, the system uses the  **post-decrement operator (x--)**  to show the current token number and then decrease the count for the next user.

 **When executed, the code will show:** 

```
Token issued to User A: 13
Token issued to User B: 12
Tokens left after issuing: 11

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:44:11.297Z  

```c_cpp
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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP116)