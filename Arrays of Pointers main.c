#include <stdio.h>
#include <stdlib.h>

int main()
{
 typedef struct
{
char s1[81];
char s2 [81];
char s3 [81];
} Rec ;
Rec *a[10];
a[0] = (Rec*) malloc(sizeof (Rec));
strcpy(a[0]-> s1, "hello");
free (a[0]);
    return 0;
}
