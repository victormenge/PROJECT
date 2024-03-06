#include <stdio.h>
#include <stdlib.h>

int main()
{
   import random

random.seed(123)  # Setting random seed to 123 for example
a = [random.randint(1, 100) for _ in range(5)]

print(a)
    return 0;
}
