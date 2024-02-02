#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter the first value : ");
    scanf("%d" , &a);
    printf("Enter the second value : ");
    scanf("%d" , &b);
    printf("Enter the third value : ");
    scanf("%d" , &c);
    c = a + b + c;
    printf("%d + %d = %d\n" , a, b, c, c);
    return 0;

   }
