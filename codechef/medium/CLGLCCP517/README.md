# CLGLCCP517

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Update Rectangle Dimensions

In this example, we demonstrate how to modify a structure's members by passing it by reference.
The program takes user input for the length and width of a rectangle, passes the structure's address to a function, and updates its values using the `->` operator.

### Sample 1:
Input
Output

```
45
13
```

```
Before update:
Length = 45, Width = 13
After update:
Length = 50, Width = 16
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T16:44:42.233Z  

```c_cpp
#include <stdio.h>

// Define a structure to represent a rectangle
struct Rectangle {
    int length;  // Length of the rectangle
    int width;   // Width of the rectangle
};

// Function to update rectangle dimensions using pass-by-reference
void updateRectangle(struct Rectangle *r) {
    // Increase the length and width of the original rectangle
    r->length += 5;
    r->width += 3;
}

int main() {
    struct Rectangle myRect;

    // Take user input for rectangle dimensions
    scanf("%d", &myRect.length);
    scanf("%d", &myRect.width);

    // Print dimensions before update
    printf("Before update:\n");
    printf("Length = %d, Width = %d\n", myRect.length, myRect.width);
    
    // Call the function and pass the address of the structure
    // This allows the function to modify the original structure
    updateRectangle(&myRect);
    
    // Print dimensions after update
    printf("After update:\n");
    printf("Length = %d, Width = %d\n", myRect.length, myRect.width);

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP517)