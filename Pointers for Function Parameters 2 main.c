#include <stdio.h>
#include <stdlib.h>

void swap (int *i,int*j)
{
  int t;
t = * i;
* i = * j;
* j = t;
}
void main (void)
{
int a,b;
a = 5;
b = 10;
printf ("%d %d\n" , a , b );
swap(&a , &b ) ;
printf ("%d %d\n " , a , b );
    return 0;
}
