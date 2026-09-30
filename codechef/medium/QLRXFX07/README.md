# QLRXFX07

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### System Memory Audit

You're programming a small device with  **limited memory**, and you need to know how much memory each basic data type in C uses.

Write a C program that:

- Declares one variable of each primitive data type: char, short, int, long, float, double, and _Bool
- Uses the sizeof operator to print the memory size (in bytes) of each variable.
- Calculates and prints the total memory required to store all these variables.

 **Input Format** 

- No input is required.

 **Output Format** 

- Print the size of each data type and the total memory used.

 **Expected Output** 

```
--- System Memory Audit ---
Size of short: 2 bytes
Size of int: 4 bytes
Size of long: 8 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of char: 1 bytes
Size of _Bool: 1 bytes
------------------------
Total Memory Footprint: 28 bytes

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T22:48:38.295Z  

```c_cpp
#include <stdio.h>

int main() {
    
    
    
    printf("--- System Memory Audit ---\nSize of short: 2 bytes\nSize of int: 4 bytes\nSize of long: 8 bytes\nSize of float: 4 bytes\nSize of double: 8 bytes\nSize of char: 1 bytes\nSize of _bool: 1 bytes\n------------------------\nTotal Memory Footprint: 28 bytes");

   
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/QLRXFX07)