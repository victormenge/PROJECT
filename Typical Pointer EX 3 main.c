#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j;
   int *p;/* a pointer to an integer*/
   printf("%d %d\n",p, &i);
   p=&i;
   printf("%d %d\n",p, &i);
    return 0;
}
