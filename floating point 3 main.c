#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a,b;
   a=0;
   b=-1;
   while (a<=100)
   {
       if ((a>98.6)&&(b <98.6))
   {
   printf("%6.2f degrees F =%6.2F degrees C\c",
          98.6, (98.6-32.0)* 5.0/9.0);
   }
   printf("%6.2f degrees F =%6.2F degrees C\c",
          a, (a-32.0)* 5.0/9.0);
   b=a;
   a=a+10;
   }
    return 0;
}
