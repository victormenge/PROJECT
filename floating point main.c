#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a=0;
   while (a <=100)

   {
printf("%6.2f degrees F = %6.2f degrees C\n",
       a, (a-32.0)*5.0/9.0);
       a=a+10;
}
       return 0;
}
