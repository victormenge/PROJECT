#include <stdio.h>

int main() {
    int x = 10;
    char c = 'A';
    float y = 5.5;

    // Typecasting int to float
    float result1 = (float)x / y;
    printf("Result 1: %.2f\n", result1);  // Output: 1.82

    // Typecasting float to int
    int result2 = x / (int)y;
    printf("Result 2: %d\n", result2);  // Output: 1

    // Typecasting char to int
    int result3 = x + c;
    printf("Result 3: %d\n", result3);  // Output: 81 (ASCII value of 'A' is 65)

    return 0;
}
