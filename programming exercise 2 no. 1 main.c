#include <stdio.h>
#include <stdlib.h>

int main()
{
 int start, end, increment;

    printf("Enter starting value: ");
    scanf("%d", &start);
    printf("Enter ending value: ");
    scanf("%d", &end);
    printf("Enter increment value: ");
    scanf("%d", &increment);

    printf("Fahrenheit   Celsius\n");

    while (start <= end) {
        printf("%4d degrees F = %4d degrees C\n", start, (start - 32) * 5 / 9);
        start += increment;
    }

    return 0;
}
