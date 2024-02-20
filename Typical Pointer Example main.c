#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i , j ;
int *p; /* a pointer to aninteger */
p = &i ;
*p = 5 ;
j = i ;
printf ("%d %d %d \ n " , i , j , *p ) ;
    return 0;
}
