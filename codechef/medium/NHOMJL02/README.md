# NHOMJL02

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Flight Code Extractor

Chef is working for an  **airline's baggage management system**. Each passenger booking is represented by a  **9-character code**.

The structure of the booking code is as follows:

- The first 3 characters represent the airline code (e.g., BAW).
- The next 3 characters represent the flight number (e.g., 747).
- The last 3 characters represent the destination airport code (e.g., LHR).

Chef’s task is to write a program that:

- Takes the full 9-character booking code as input.
- Prints only the flight number.
### Input Format
- A single line containing a 9-character string.
### Output Format
- Print a single line containing the 3-character flight number extracted from the booking code.
### Constraints
- The input string will always be exactly 9 characters long.
- Characters can be uppercase letters and/or digits.
### Sample 1:
Input
Output

```
BAW747LHR
```

```
747
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T18:17:32.911Z  

```c_cpp
#include <stdio.h>
#include <string.h>

int main() {
    char booking_code[10];
    char flight_number[4];

    // Read the 9-character booking code
    scanf("%s",booking_code);

    // --- Your code here ---
   strncpy(flight_number,booking_code+3,3);
   flight_number[3] = '\0';
   
   

    // --- End of your code ---

    printf("%s\n", flight_number);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/NHOMJL02)