#include <stdio.h>
#include <stdlib.h>

int main()
{
  typedef struct
{
char name [21];
char city [21];
char phone [21];
char *comment ;
} Addr ;
Addr *s;
char comm[100] ;
s=( Addr *)malloc (sizeof( Addr ));
    return 0;
}
