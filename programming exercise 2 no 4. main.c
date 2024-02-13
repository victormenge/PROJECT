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

    printf("Pounds   Kilograms\n");

    for (int i = start; i <= end; i += increment) {
        printf("%4d lbs = %4.2f kg\n", i, i * 0.453592); // 1 lb = 0.453592 kg
    }

    return 0;
}
