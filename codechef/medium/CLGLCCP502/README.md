# CLGLCCP502

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Storing Initial Device Registration Data

A company wants to store initial information about a device, such as its name and year of manufacture, before adding it to the system. They decide to use a structure to keep these values grouped and declare the structure variable at the start of the program with known data.

 **When executed, the code will show:** 

```
Structure declared and initialized successfully

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T15:48:43.169Z  

```c_cpp
#include <stdio.h>

// Define a structure to represent a device
struct Device {
    char name[30];
    int year;
};

int main() {
    // Declare and initialize a structure variable
    struct Device d1 = {"Thermal Scanner", 2021};
    printf("Structure declared and initialized successfully.");
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP502)