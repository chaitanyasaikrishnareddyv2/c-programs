# CLGLCCP109

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Counting Item Purchases

In this example, we demonstrate how to use the post-increment operator (x++) to keep track of books being issued in a library. Each time a book is issued, the current count is shown before it's incremented for the next issue.

 **When executed, the code will show:** 

```
Book issued to student A. Issue number: 0
Book issued to student B. Issue number: 1
Book issued to student C. Issue number: 2
Book issued to student D. Issue number: 3

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:38:41.551Z  

```c_cpp
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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP109)