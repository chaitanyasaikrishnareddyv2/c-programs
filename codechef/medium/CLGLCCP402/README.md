# CLGLCCP402

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Format and Store Date Components as Strings

You have three integer variables representing a date: day, month, and year. Complete the code to convert each integer into its string representation using  **`sprintf()`**  and print the formatted date string in `DD-MM-YYYY` format.

 **Expected Output:** 

```
Formatted date: 7-9-2025

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T17:30:48.006Z  

```c_cpp
#include <stdio.h>

int main() {
    int day = 7;
    int month = 9;
    int year = 2025;

    char strDay[3];
    char strMonth[3];
    char strYear[5];

    // Convert day to string
    sprintf(strDay, "%d", day);

    // Convert month to string
    sprintf(strMonth, "%d", month);

    // Convert year to string
    sprintf(strYear, "%d", year);

    // Print formatted date
    printf("Formatted date: %s-%s-%s\n", strDay, strMonth, strYear);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP402)