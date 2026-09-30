# CLGLCCP110

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Output for Post-increment Operator in C

What will be the output of the following C code?

```
#include <stdio.h>

int main() {
    int x = 10;
    printf("%d ", x++);
    printf("%d ", x);
    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:39:17.111Z  

```cpp
#include <stdio.h>

int main() {
    int issueCount = 0;  // Initialize book issue counter

    // Issue books to students and print the issue number before incrementing
    printf("Book issued to student A. Issue number: %d\n", issueCount++);
    printf("Book issued to student B. Issue number: %d\n", issueCount++);
    printf("Book issued to student C. Issue number: %d\n", issueCount++);
    printf("Book issued to student D. Issue number: %d\n", issueCount++);

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP110)