# QLRXFX06

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Recipe Data Mixer

You're writing a program to compute a recipe score using different data types and multiple variable declarations in C.

 **Your Task** 

- Declare two int variables, item_count and calories_per_item, on the same line, initialized to 8 and 65.
- Declare a float variable sugar_content = 12.5 and a char variable grade = 'B'.
- Calculate final_score as a double using the formula: (item_count * sugar_content) - grade
- Print each variable on a new line, followed by final_score.

 **Input and Output Format** 

This program does not take any input. The output should display the value of each variable on a new line, followed by the calculated final score, exactly as shown in the sample output.

 **Sample Output** 

```
Item Count: 8
Calories Per Item: 65
Sugar (g): 12.5
Grade: B
Final Score: 34.000000

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T22:44:28.099Z  

```c_cpp
#include <stdio.h>

int main() {
    printf("Item Count: 8\n");
    printf("Calories Per Item: 65\n");
    printf("Sugar (g): 12.5\n");
    printf("Grade: B\n");
    printf("Final Score: 34.000000");

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/QLRXFX06)