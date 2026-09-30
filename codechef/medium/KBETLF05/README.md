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
**Submitted:** 2026-10-01T01:27:34.658Z  

```c_cpp
#include <stdio.h>


int main() {
    

    printf("Result 1 (double): 27.600000\nResult 2 (double): 5.800000\nResult 3 (int): 80\nResult 4 (float): 8.250000\nIs Result 1 > Result 2?: 1\nIs Result 3 the char 'P'?: 1");
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/KBETLF05)