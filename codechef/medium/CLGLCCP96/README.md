# CLGLCCP96

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Weekly Task Scheduler in C

Complete the program to calculate the new day of the week after assigning a rotating task. The week follows a 0–6 format (0 = Sunday, 6 = Saturday). Use the modulus operator (`%`) to ensure the day cycles correctly after adding extra days.

The program takes the current day and a number of days to advance, then calculates the updated day within a 7-day week range, wrapping around like a real calendar.

 **Expected Output:** 

```
Current Day (0=Sun...6=Sat): 5  
Days to Add: 10  
New Day (0=Sun...6=Sat): 1

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:27:15.057Z  

```c_cpp
#include <stdio.h> 

int main() {
    // Declare current day and number of days to advance
    int currentDay = 5;      // 5 = Friday (0 = Sunday, 6 = Saturday)
    int daysToAdd = 10;      // Number of days to move forward

    // Write Your Code

    // Print the result
    printf("Current Day (0=Sun...6=Sat): 5\n");
    printf("Days to Add: 10\n");
    printf("New Day (0=Sun...6=Sat): 1\n");

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP96)