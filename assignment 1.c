#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, c, d;

    printf("Enter the first value: ");
    scanf("%d", &a);

    printf("Enter the second value: ");
    scanf("%d", &b);

    printf("Enter the third value: ");
    scanf("%d", &d);

    c = a + b + d;

    printf("%d + %d + %d = %d\n", a, b, d, c);

    return 0;
}
