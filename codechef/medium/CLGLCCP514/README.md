# CLGLCCP514

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### MCQ - Choose the Correct Output

What will be the output of the following C program?

```
#include <stdio.h>

struct Point {
    int x;
    int y;
};

void movePoint(struct Point p) {
    p.x += 10;
    p.y += 20;
    printf("Inside function: x = %d, y = %d\n", p.x, p.y);
}

int main() {
    struct Point pt = {5, 15};

    printf("Before function call: x = %d, y = %d\n", pt.x, pt.y);
    
    movePoint(pt);

    printf("After function call: x = %d, y = %d\n", pt.x, pt.y);

    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T16:32:56.965Z  

```cpp
#include <stdio.h>
#include <string.h>

// Define a structure named 'Book' with two string members
struct Book {
    char title[100];   // Member to store the book's title
    char author[100];  // Member to store the book's author
};

// Function that takes a structure as an argument (by value)
void updateBook(struct Book b) {
    // Modify the copied structure's members
    // These changes do NOT affect the original structure in main
    strcpy(b.title, "1984");            // Attempt to change the title
    strcpy(b.author, "George Orwell");  // Attempt to change the author
    
    // Print values inside the function to show the change
    printf("Update Value: %s by %s\n", b.title, b.author);
}

int main() {
    // Declare and initialize a structure variable
    struct Book myBook;
    strcpy(myBook.title, "The Great Gatsby");         // Set initial title
    strcpy(myBook.author, "F. Scott Fitzgerald");     // Set initial author

    // Print values before calling the function
    printf("Before update: %s by %s\n", myBook.title, myBook.author);

    // Call the function and pass the structure by value
    updateBook(myBook);  // A copy of myBook is passed to the function

    // Print values after the function call
    // Original values remain unchanged because of pass-by-value
    printf("After update: %s by %s\n", myBook.title, myBook.author);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP514)