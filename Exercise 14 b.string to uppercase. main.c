#include <stdio.h>
#include <string.h>

void convertToUppercase(char *str) {
    int i = 0;
    while (str[i]) {
        str[i] = toupper(str[i]);
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character
    str[strcspn(str, "\n")] = 0;

    convertToUppercase(str);

    printf("String in uppercase: %s\n", str);

    return 0;
}
