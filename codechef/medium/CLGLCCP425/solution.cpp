#include <stdio.h>

// Function declaration (prototype)
void printNumber();

int main() {
    printNumber();  // Call the function

    return 0;
}

// Function definition
void printNumber() {
    int value = 10;  // Integer declared inside the function
    printf("The number is: %d\n", value);
}