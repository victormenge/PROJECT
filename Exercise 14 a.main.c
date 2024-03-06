#include <stdio.h>
#include <string.h>

// Function to remove leading spaces
void removeLeadingSpaces(char *str) {
    int index = 0;
    while (str[index] == ' ') {
        index++;
    }
    strcpy(str, &str[index]);
}

// Function to remove trailing spaces
void removeTrailingSpaces(char *str) {
    int index = strlen(str) - 1;
    while (index >= 0 && str[index] == ' ') {
        str[index] = '\0';
        index--;
    }
}

// Function to return the last name
char* getLastName(char *full_name) {
    char *last_name = strrchr(full_name, ' ');
    if (last_name != NULL) {
        last_name++;  // Move pointer to the character after the space
        return last_name;
    } else {
        return full_name;  // If no space is found, return the full name
    }
}

int main() {
    char full_name[100];

    printf("Enter the first name followed by a blank and then the last name: ");
    fgets(full_name, sizeof(full_name), stdin);

    // Removing leading and trailing spaces
    removeLeadingSpaces(full_name);
    removeTrailingSpaces(full_name);

    // Getting and printing the last name
    char *last_name = getLastName(full_name);
    printf("\nThe last name is: %s\n", last_name);

    return 0;
}
