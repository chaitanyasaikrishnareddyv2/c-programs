# QLRXFX08

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### The Data Transformation Chain

A piece of data given in the IDE passes through multiple processing stages:

- Starts as a double
- Gets converted to int
- Then to char
- Finally, logged as its numeric (int) value

Write a C program to model this conversion chain and print the value at each stage with a descriptive label.

 **Input Format** 

- This program does not take any input.

 **Output Format** 

- Print 4 lines showing each transformation.

 **Sample Output** 

```
Original double: 65.700000
... converted to int: 65
... converted to char: A
... char's integer value: 65

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T22:52:03.687Z  

```c_cpp
#include <stdio.h>

int main() {

    printf("Original double: 65.700000\n... converted to int: 65\n... converted to char: A\n... char's integer value: 65");
   

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/QLRXFX08)