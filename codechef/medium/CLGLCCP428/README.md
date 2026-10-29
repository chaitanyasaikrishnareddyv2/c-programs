# CLGLCCP428

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Arithmetic Operations

In this example, we demonstrate using a void function in C that takes two integer parameters. The function calculates and prints the sum, product, and division of the two numbers. It also handles division by zero by displaying an appropriate message.

### Sample 1:
Input
Output

```
10
5

```

```
Sum: 15
Product: 50
Division: 2.00

```

### Sample 2:
Input
Output

```
8
0

```

```
Sum: 8
Product: 0
Division: Cannot divide by zero.

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T18:35:53.454Z  

```c_cpp
#include <stdio.h>

// Function declaration: declares a function that takes two integers and returns nothing
void printOperations(int a, int b);

int main() {
    int num1, num2;

    // Read first integer from user
    scanf("%d", &num1);
    // Read second integer from user
    scanf("%d", &num2);

    // Call the function with user inputs
    printOperations(num1, num2);

    return 0;  // End of program
}

// Function definition: performs and prints sum, product, and division of two integers
void printOperations(int a, int b) {
    int sum = a + b;          // Calculate sum
    int product = a * b;      // Calculate product

    printf("Sum: %d\n", sum);         
    printf("Product: %d\n", product); 

    // Check if second number is zero before division to avoid error
    if (b != 0) {
        double division = (double)a / b;      // Perform floating-point division
        printf("Division: %.2lf\n", division);  // Print division result with 2 decimal places
    } else {
        printf("Division: Cannot divide by zero.\n");  // Handle division by zero case
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP428)