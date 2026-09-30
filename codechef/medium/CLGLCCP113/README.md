# CLGLCCP113

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Score Level Up System

In this example, we demonstrate a game-like score system where a player's level increases. The  **pre-increment operator (`++x`)**  is used to increment the level  **before**  it is displayed, ensuring the updated level is shown immediately.

 **When executed, the code will show:** 

```
Player leveled up to: 4
Current level: 4

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:42:25.870Z  

```c_cpp
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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP113)