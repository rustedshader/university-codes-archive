#include <stdio.h>

int main()
{
    int a = 5;
    float b = 3.2;
    char c = 'l';
    int *x = &a;
    float *y = &b;
    char *z = &c;

    printf("The Values of the values are: %d %f %c\n", a, b, c);
    printf("The Values through the pointer are: %d %f %c\n", *x, *y, *z);
    return 0;
}