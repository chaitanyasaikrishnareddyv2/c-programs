# CLGLCCP381

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Problem - Find Urgent in a Message

Write a C program that checks if the word  **"urgent"**  is present in a message. If it is, print  **"The message is urgent!"**.

 **Expected Output:** 
If the substring `urgent` is found in the message:

```
The message is urgent!

```

If `urgent` is not found:

```
The message is not urgent.

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T16:09:43.556Z  

```c_cpp
#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a message
    char message[] = "This is an urgent update for all team members.";

    // Complete the code to find the substring "urgent"
char *result = (message,"urgent");
  // Check if the substring "urgent" is found
    if (result != NULL) {
        // Print the result if found
        printf("The message is urgent!\n");
    } else {
        // Print if not found
        printf("The message is not urgent.\n");
    }

    
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP381)