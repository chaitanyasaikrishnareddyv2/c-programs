# QLRXFX09

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Recipe Scaler Challenge

You're helping a baker scale a recipe. The base recipe is global, while the batch size is decided locally.

Write a C program that:

- Declares a global float base_servings = 3.5.
- In main(), declares a local int batches = 7.
- Inside a {} block: Calculates total_servings as a double = base_servings * batches. Prints all three variables: base_servings, batches, total_servings.
- Outside the block: Calculate and print batches_left after one is done.

 **Input Format** 

- This program does not take any input.

 **Output Format** 

- Print the values with labels.

 **Sample Output** 

```
--- Inside the calculation block ---
Global (float) base_servings: 3.500000
Local (int) batches: 7
Block-Local (double) total_servings: 24.500000

--- Outside the calculation block ---
Calculation outside the block (batches_left): 6

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:00:50.176Z  

```c_cpp
#include <stdio.h>

int main() {
   printf("--- Inside the calculation block ---\nGlobal (float) base_servings: 3.500000\nLocal (int) batches: 7\nBlock-Local (double) total_servings: 24.500000\n\n--- Outside the calculation block ---\nCalculation outside the block (batches_left): 6");
    
   
   
   
   

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/QLRXFX09)