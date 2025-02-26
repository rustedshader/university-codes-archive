// Write a recursive function to find the nth triangular number, where Formula: T(n) = n + T(n-1) with T(1) = 1.

#include <stdio.h>

int triangular_number(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + triangular_number(n - 1);
}

int main()
{
    int n = 5;
    int ans = triangular_number(n);
    printf("%d\n", ans);
    return 0;
}
