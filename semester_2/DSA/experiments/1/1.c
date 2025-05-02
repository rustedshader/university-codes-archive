// Fibonnaci Series with and without recursion !

#include <stdio.h>

#define FIB_SIZE 8

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

/* This is Recursive Approach ! */

int main()
{
    int ans[FIB_SIZE];
    for (int i = 0; i < FIB_SIZE; i++)
    {
        ans[i] = fib(i);
    }
    for (int i = 0; i < FIB_SIZE; i++)
    {
        printf("%d\n", ans[i]);
    }
}

/* This is Non Recursive Approach ! */

int main()
{
    int fib[FIB_SIZE];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < FIB_SIZE; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < FIB_SIZE; i++)
    {
        printf("%d\n", fib[i]);
    }
}