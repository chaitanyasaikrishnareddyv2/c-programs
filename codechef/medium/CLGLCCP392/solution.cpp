#include <stdio.h>
#include <string.h>

int main() {
    // Initialize a character array with some content
    char buffer[30] = "Reset this text";

    // Print before clearing
    printf("Before clear: %s\n", buffer);

    // Clear the string using memset
    memset(buffer, 0, sizeof(buffer));  // sizeof(buffer) returns the total size of the array in bytes (30 in this case).

    // Print after clearing
    printf("After clear: %s\n", buffer);

    return 0;
}