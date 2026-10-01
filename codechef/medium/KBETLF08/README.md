# KBETLF08

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Operator Precedence Gauntlet

You are debugging legacy C code that contains assignment operators. To fully understand the behavior, you need to evaluate expressions with and without parentheses and observe how operator precedence and side effects impact the results.

You're given three integer variables: `a = 3`, `b = 2`, `c = 5`

Your task is to:

- Evaluate the compound assignment: x *= y += z - x; Once without using parenthesis Again using parentheses

 **Input Format** 

- No input required.

 **Output Format** 
Your program should print:

- The initial values of all variables.
- The results of given expression without parenthesis.
- The results of given expression with parenthesis.

 **Sample Output** 

```
Initial Values:
a = <value>, b = 2<value>, c = <value>

Expression - Without Parentheses:
a = <value>, b = <value>, c = <value>

Expression - With Parentheses:
a = <value>, b = <value>, c = <value>

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T02:32:21.248Z  

```cpp
#include <stdio.h>

int main() {
 
    int a = 3, b = 2, c = 5;
    // Your code goes here 
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    int a1 = 3, b1 = 2, c1 = 5;
    a1 *= b1 += c1 - a1;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    int a2 = 3, b2 = 2, c2 = 5;
    a2 *= (b2+=(c2-a2));
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/KBETLF08)