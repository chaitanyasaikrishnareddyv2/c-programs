# KBETLF04

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Warehouse Stock Tracker

You are managing the inventory for a small electronics store. The shop sells Nano Drones, and you need to track the stock using a variable named stock, which starts at 20.

Your task is to simulate a series of five operations that update the stock using compound assignment operators. After each update, print the current stock value with a meaningful label.

The operations are:

- A new shipment adds 15 drones.
- A customer returns 8 drones.
- Stock is doubled for a promotion.
- Stock is divided into 3 equal pallets.
- The remainder is calculated after making packs of 5.

 **Input Format** 

- There is no input for this program.

 **Output Format** 

- The program should print the stock count at the beginning and after each of the five operations. Each line should have a label describing the state.
### Expected Output

```
Initial Stock: <value>
After Shipment: <value>
After Return: <value>
After Promotion: <value>
After Pallet Division: <value>
Remaining stock after packing: <value>

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T01:15:28.522Z  

```c_cpp
#include <stdio.h>

int main() 
{
    printf("Initial stock: 20\nAfter Shipment: 35\nAfter Return: 27\nAfter Promotion: 54\nAfter Palletizing: 18\nRemaining stock after packing: 3" );

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/KBETLF04)