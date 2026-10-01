# KBETLF05

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Scientific Data Mixer

You're a junior programmer at a research lab, and you're given raw experimental data in the following variables:

- x: an int representing a count (e.g., number of trials)
- y: a float representing a measurement
- z: a double representing a high-precision factor
- c: a char representing a category code

Your task is to perform 4 calculations and 2 checks using type mixing, promotion, and casting in C.

 **Calculations to Perform** 

- Result 1 (double): x + y * z
- Result 2 (double): x / (int)y + z
- Result 3 (int): c + x
- Result 4 (float): (float)x / 4 + y

 **Checks to Perform** 

- Is Result 1 > Result 2? (print 1 if true, 0 if false)
- Is Result 3 equal to the char 'P'? (print 1 if true, 0 if false)

 **Input Format** 

- This program does not take any input.

 **Output Format** 

- The output should consist of six lines, each displaying a labeled result from your calculations and checks. Floating-point and double values should be printed with default precision.

 **Sample Output** 

```
Result 1 (double): <value>
Result 2 (double): <value>
Result 3 (int): <value>
Result 4 (float): <value>
Is Result 1 > Result 2?: <0 or 1>
Is Result 3 the char 'P'?: <0 or 1>

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T02:00:04.917Z  

```c_cpp
#include <stdio.h>
#include <stdbool.h>

int main() {
    // 1. Declare and initialize the raw data variables
    int x = 15;
    float y = 4.5;
    double z = 2.8;
    char c = 'A';

    // --- START YOUR CODE HERE ---

    // 2. Perform the mixed-type calculations
        double r1 = (x + y * z);
        double r2 = (x / (int)y + z);
        int r3 = c + x;
        float r4 = (float)x/4 + y;
    

    // 3. Use comparison operators to set boolean flags
    _Bool r = (r1 > r2);
    _Bool re = (r3 == 'P');
    
    
    // 4. Print all the results with descriptive labels
   printf("Result 1 (double): %f\n",r1);
   printf("Result 2 (double): %f\n",r2);
   printf("Result 3 (int): %d\n",r3);
   printf("Result 4 (float): %f\n",r4);
   printf("Is Result 1 > Result 2?: %d\n", r);
   printf("Is Result 3 the char 'p'?: %d\n", re);
    


    // --- END YOUR CODE HERE ---

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/KBETLF05)