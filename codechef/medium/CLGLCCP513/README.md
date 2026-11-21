# CLGLCCP513

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Change Book Information

In this example, we demonstrate how a structure in C is passed by value to a function. We define a `Book` structure containing a title and an author. The program attempts to update these details in a function, but because the structure is passed by value, the original data remains unchanged.

 **When executed, the code will show:** 

```
Before update: The Great Gatsby by F. Scott Fitzgerald
Update Value: 1984 by George Orwell
After update: The Great Gatsby by F. Scott Fitzgerald

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T16:29:13.661Z  

```c_cpp
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

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP513)