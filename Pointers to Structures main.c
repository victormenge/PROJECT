#include <stdio.h>
#include <stdlib.h>

int main()
{
  typedef struct
{
char name [21];
char city [21];
char state [3];
} Rec ;
typedef Rec * RecPointer;
RecPointer r;
r =( RecPointer)malloc (sizeof(Rec));
    return 0;
}
