#include <stdio.h>

// Function declaration
void multiplyByThree(int num);

int main() {
    int number = 7;

    printf("Before function call, number = %d\n", number);

    multiplyByThree(number);  // Pass a copy of number

    printf("After function call, number = %d\n", number);

    return 0;
}

// Function definition
void multiplyByThree(int num) {
    num = num * 3;  // Modify the local copy
    printf("Inside function, multiplied value = %d\n", num);
}