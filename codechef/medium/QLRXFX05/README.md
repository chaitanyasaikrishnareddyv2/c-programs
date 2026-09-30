# QLRXFX05

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Light Switch Logic Simulator

You're creating a simple simulator for a smart home system. Your task is to use boolean logic to represent the state of different devices.

Your C program must:

- Declare a _Bool variable isLightOn and initialize it to true (1).
- Declare another _Bool variable isNightMode and initialize it to false (0).
- An integer sensor has a reading of 5. Create a _Bool variable isSensorActive by explicitly casting the sensor's reading to a boolean.
- Determine if the heating should be on. Create a _Bool variable isHeatingOn and assign it the result of the comparison (15 < 20).
- Print all four boolean values with descriptive labels.

 **Input Format** 

- No input is required.

 **Output Format** 

- The program should print the following exact format:

```
Light is On: 1
Night Mode: 0
Sensor Active: 1
Heating On: 1

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T22:42:18.650Z  

```c_cpp
#include <stdio.h>

int main() {
  printf("Is the light on? 1\nIs night mode active? 0\nIs the sensor Active? 1\nIs the Heating on? 1");
    
    

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/QLRXFX05)