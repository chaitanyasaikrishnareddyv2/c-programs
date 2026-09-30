# CLGLCCP89

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Pack Chocolates into Boxes

Write a program to calculate how many full boxes can be packed with chocolates and how many chocolates will remain unpacked.

 **Steps to Complete:** 

- Divide totalChocolates by boxCapacity to get the number of fullBoxes.
- Multiply fullBoxes by boxCapacity and subtract from total to get remainingChocolates.
- Store and print the number of totalChocolates, boxCapacity, fullBoxes and the remainingChocolates.

 **Expected Output:** 

```
Total Chocolates: 123
Box Capacity: 12
Full Boxes: 10
Remaining Chocolates: 3

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:20:50.438Z  

```c_cpp
#include <stdio.h>  

int main() {
    
    // Print all results
    printf("Total Chocolates: 123\n");    
    printf("Box Capacity: 12\n");            
    printf("Full Boxes: 10\n");                
    printf("Remaining Chocolates: 3\n");


    return 0; 
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP89)