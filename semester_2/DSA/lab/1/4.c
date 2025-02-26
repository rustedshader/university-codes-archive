// Write a c program to check the Armstrong number.

#include <stdio.h>

int main()
{
    int n = 153;
    int temp = n;
    int arms = 0;

    while (temp > 0)
    {
        int rem = temp % 10;
        arms += (rem * rem * rem);
        temp = temp / 10;
    }

    if (n == arms)
    {
        printf("This is Armstrong Number\n");
    }
    else
    {
        printf("This is not Armstrong Number\n");
    }
    return 0;
}