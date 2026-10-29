# CLGLCCP436

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### MCQ - String Return Type in Functions in C

What will be the output of the following C program that uses a function to return a string?

```
#include <stdio.h>
#include <string.h>

// Function that returns a string
char* greet() {
    return "Hello, C Programming!";
}

int main() {
    char* message = greet();  // Function call

    // Print the returned message
    printf("%s\n", message);

    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T19:03:10.829Z  

```cpp
#include <stdio.h>

// Function to calculate and return area of rectangle
float calculateArea() {
    float length, width;
    
    scanf("%f", &length);
    
    scanf("%f", &width);
    
    return length * width;
}

int main() {
    float area = calculateArea();
    printf("The area of the rectangle is: %.2f\n", area);
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP436)