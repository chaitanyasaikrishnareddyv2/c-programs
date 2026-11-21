#include <stdio.h>

// Define a structure to represent book details
struct Book {
    char title[50];
    int pages;
};

int main() {
    // Declare and initialize a structure variable
    struct Book b1 = {"The Art of C Programming", 450};

    // Access and display structure members using the dot operator
    printf("Book Title: %s\n", b1.title);
    printf("Total Pages: %d\n", b1.pages);

    return 0;
}