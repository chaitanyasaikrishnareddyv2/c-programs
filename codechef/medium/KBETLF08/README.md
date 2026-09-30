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

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T01:49:43.284Z  

```c_cpp
#include <stdio.h>

int main() {
 
    int a = 3, b = 2, c = 5;
    printf("Initial Values:\na = 3, b = 2, c = 5\n\nExpression - Without Parentheses:\na = 12, b = 4, c = 5 \n\nExpression - With Parentheses:\na = 12, b = 4, c = 5");

    

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/KBETLF08)