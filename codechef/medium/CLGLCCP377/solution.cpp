#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a sample email address
    char email[] = "student@example.com";

    // Use strchr to find the '@' character
    char *result = strchr(email, '@');

    // Check if the character was found
    if (result != NULL) {
        printf("Character found!\n");
    } else {
        printf("Character not found!\n");
    }

    return 0;
}