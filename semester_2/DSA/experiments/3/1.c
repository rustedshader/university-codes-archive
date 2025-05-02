// Write a recursive function to print numbers from 1 to N.

#include <stdio.h>

void recursive_print(int n)
{
    if (n == 0)
    {
        return;
    }

    recursive_print(n - 1);
    printf("%d\n", n);
}

int main()
{
    recursive_print(50);
}