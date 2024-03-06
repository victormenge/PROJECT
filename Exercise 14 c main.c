#include <stdio.h>
#include <string.h>

// Function to get the first word from a string
char* getFirstWord(char* str) {
    static char remaining[100]; // Array to store the remaining string
    char firstWord[100]; // Array to store the first word
    int i, j = 0;

    // Iterating through the string to get the first word
    for (i = 0; str[i] != ' ' && str[i] != '\0'; i++) {
        firstWord[j++] = str[i];
    }
    firstWord[j] = '\0'; // Null-terminate the first word

    // Copying the remaining string after the first word
    strcpy(remaining, str + i);

    return remaining;
}

int main() {
    char sentence[100];
    printf("Enter a string: ");
    gets(sentence);

    char* remainingString = getFirstWord(sentence);

    printf("First word: %s\n", sentence);
    printf("Remaining string: %s\n", remainingString);

    return 0;
}
