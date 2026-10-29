# CLGLCCP435

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Area of a Rectangle

In this example, we demonstrate how to use a function to calculate the area of a rectangle based on user input for length and width. We will create a simple function that takes the user’s input and returns the area of the rectangle.

### Sample 1:
Input
Output

```
5
3

```

```
The area of the rectangle is: 15.00

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T19:02:50.523Z  

```c_cpp
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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP435)