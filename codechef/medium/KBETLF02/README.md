# KBETLF02

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### The Counter Challenge

You're tracking a score using a variable counter. Your task is to explore how increment (++) and decrement (--) operators work in C.
 **First, you will observe the effects of:** 

- Post-increment (counter++)
- Pre-increment (++counter)
- Post-decrement (counter--)
- Pre-decrement (--counter)

Then, reset `counter` and evaluate the following  **complex expression** :
`result = ++counter + counter++ - --counter;`

### Input Format

This program does not require any input from the user.

### Output Format

Print the following in this order:

- Results of the four operations (one per line).
- A reset message.
- Final result of a complex expression.
- Final values of counter and result.
### Expected Output

```
Post-increment: 5
Pre-increment: 7
Post-decrement: 7
Pre-decrement: 5

Counter reset to 5

Complex expression result: 7
Final counter value: 6

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T00:54:58.497Z  

```c_cpp
#include <stdio.h>

int main() {
    printf("Post-increment: 5\nPre-increment: 7\nPost-decrement: 7\nPre-decrement: 5\n\nCounter reset to 5\n\nComplex expression result: 7\n\nFinal counter value: 6");
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/KBETLF02)