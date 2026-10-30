#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // Buffer to store user input (up to 99 characters + 1 for '\0')

    // Prompt user to enter a sentence (optional)
    // printf("Enter a sentence: ");

    // Read a full line of input from the user, including spaces
    // fgets() reads up to sizeof(str) - 1 characters or until a newline is found
    // It automatically adds '\0' at the end of the string
    fgets(str, sizeof(str), stdin);  

    // Delimiter character used to split words (space in this case)
    char delimiter[] = " ";

    // Pointer to hold each extracted word (token)
    char *token = strtok(str, delimiter);

    // Loop to extract and print all tokens
    while (token != NULL) {
        printf("Word: %s\n", token);          // Print the current word
        token = strtok(NULL, delimiter);      // Move to the next word
    }

    return 0;
}
