#include <stdio.h>

int gcd(int num1, int num2)
{
    int greater;
    int smaller;
    if (num1 > num2)
    {
        greater = num1;
        smaller = num2;
    }
    else
    {
        greater = num2;
        smaller = num1;
    }

    if (greater % smaller == 0)
    {
        return smaller;
    }
    else
    {
        int k = greater % smaller;
        return gcd(greater, k);
    }
}

int main()
{
    printf("%d\n", gcd(15, 18));
    return 0;
}
