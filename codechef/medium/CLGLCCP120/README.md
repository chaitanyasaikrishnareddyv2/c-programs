# CLGLCCP120

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked Example - Ticket Booking System

In this example, we demonstrate a ticket booking system where the number of available tickets is reduced as customers book their tickets. The  **pre-decrement operator (--x)**  is used to reduce the ticket count before displaying the updated ticket count.

 **When executed, the code will show:** 

```
Tickets available before booking: 18
Customer 1 books a ticket: 17
Customer 2 books a ticket: 16
Tickets remaining after bookings: 16

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T23:47:22.656Z  

```c_cpp
#include <stdio.h>

int main() {
     

    // Show tickets available before booking
    printf("Tickets available before booking: 18\n");

    // Customer 1 books a ticket, pre-decrement before showing updated count
    printf("Customer 1 books a ticket: 17\n");

    // Customer 2 books a ticket, pre-decrement again before showing updated count
    printf("Customer 2 books a ticket: 16\n");

    // Show final tickets available after two bookings
    printf("Tickets remaining after bookings: 16\n");

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP120)