#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ;
int *p;/* a inter to an integer  */
p = &i ;
*p = 5 ;
printf ("%d %d\n " ,i,*p) ;
    return 0;
}
