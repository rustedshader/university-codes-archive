// Write a c program to print the factorial of a number.

#include <stdio.h>

int fac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }
    return n * fac(n - 1);
}

int main()
{
    int n = 5;
    printf("%d\n", fac(n));
}