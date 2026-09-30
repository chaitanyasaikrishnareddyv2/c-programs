# KBETLF01

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Arithmetic Precedence Explorer

Chef is curious about how  **C handles operator precedence**  in mathematical expressions. As part of his learning journey, he wants to evaluate a few fixed expressions in two ways:

- Using C's default operator precedence rules.
- By adding parentheses to change the order of operations.

Your task is to help Chef write a program that evaluates and displays the results of the following  **three mathematical expressions:** 

 **Expressions to evaluate:** 

- 10 + 3 * 2
- 10 - 3 / 2 + 1
- 10 % 3 + 2 * 2

Then, re-evaluate these expressions with parentheses to force a different precedence:

- (10 + 3) * 2
- (10 - 3) / 2 + 1
- 10 % (3 + 2) * 2
### Input Format
- There is no input for this program.
### Output Format
- The output should be printed as follows: First, print the results of expressions using default precedence. Then, print the results of expressions with forced precedence using parentheses. Each result should include the expression and its evaluation.
### Sample 1:
Input
Output

```
 
```

```
--- Default Precedence ---
Expression: 10 + 3 * 2
Result: <value>
Expression: 10 - 3 / 2 + 1
Result: <value>
Expression: 10 % 3 + 2 * 2
Result: <value>
--- Forced Precedence with Parentheses ---
Expression: (10 + 3) * 2
Result: <value>
Expression: (10 - 3) / 2 + 1
Result: <value>
Expression: 10 % (3 + 2) * 2
Result: <value>
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T01:54:05.994Z  

```c_cpp
#include <stdio.h>

int main() {

    

    printf("--- Default Precedence ---\n");
    printf("Expression: 10 + 3 * 2\nResult: 16\n\n");
    printf("Expression: 10 - 3 / 2 + 1\nResult: 10\n\n");
    printf("Expression: 10 %% 3 + 2 * 2\nResult: 5\n\n");
    
    
    
    


    printf("\n--- Forced Precedence with Parentheses ---\n");
    printf("Expression: (10 + 3) * 2\nResult: 26\n\n");
    printf("Expression: (10 - 3) / 2 + 1\nResult: 4\n\n");
    printf("Expression: 10 %% (3 + 2) * 2 \nResult: 0");
    
    // Part 2: Recalculate and print results using parentheses to change precedence
   
   
   


    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/KBETLF01)