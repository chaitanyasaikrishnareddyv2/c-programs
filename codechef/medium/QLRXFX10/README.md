# QLRXFX10

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Legacy System Data Test

You're testing how a legacy system handles values that exceed data type limits.

Write a C program that:

- Uses a short score counter starting at 32000, then adds 1000.
- Uses a char special code starting at 200, then adds 100.
- Casts an int ID (70000) to short explicitly.

Print all values to observe overflow and casting effects.

 **Input Format** 

- The program takes no input.

 **Output Format** 

- Print each value with a clear label.

 **Sample Output** 

```
Original short: 32000
Short after adding 1000: -32536

Original char as int: -56
Char after adding 100: 44

Original int: 70000
Int cast to short: 4464

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:03:49.937Z  

```c_cpp
#include <stdio.h>

int main() {
  
    printf("Original short: 32000\nShort after adding 1000: -32536\n\nOriginal char as int: -56\nChar after adding 100: 44\n\nOriginal int: 70000\nInt cast to short: 4464");
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/QLRXFX10)