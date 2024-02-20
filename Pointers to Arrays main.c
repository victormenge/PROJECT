#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *p;
int i;
p = (int*) malloc ( sizeof (int [1])) ;
for (i =0; i <10; i ++)
p [i] =0;
free (p);
    return 0;
}
