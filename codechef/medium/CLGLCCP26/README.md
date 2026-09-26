# CLGLCCP26

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Item and Price Display

Your task is to complete the following C program by filling in the missing `printf` statements using appropriate  **escape sequences**  (`\t`) to format the output as shown below.

 **Expected Output:** 

```
Item:		Price:	Quantity:
Pen			$1.20	10
Notebook	$2.50	5

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-26T22:35:57.307Z  

```c_cpp
#include <stdio.h>

int main() {
    // TODO: Print header with tab escape sequences
    printf("Item:\t\tPrice:\t\Quantity\n");

    // TODO: Print Pen details with tab spacing
    printf("Pen:\t\t$1.20\t10\n");

    // TODO: Print Notebook details with tab spacing
    printf("Notebook\t$2.50\t5");

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP26)