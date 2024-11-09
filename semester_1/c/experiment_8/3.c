#include <stdio.h>

void increment_the_integer(int *p)
{
    *p += 1;
}

int main()
{
    int z = 5;
    int *x = &z;
    printf("Before increment the value of variable z: %d\n", z);
    increment_the_integer(x);
    printf("After increment the value of variable z: %d\n", z);
    return 0;
}