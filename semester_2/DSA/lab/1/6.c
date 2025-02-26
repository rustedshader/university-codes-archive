//  Write a c program to reverse a given number.

#include <stdio.h>

int main()
{
    int n = 123;
    int temp = n;
    int reversed_number = 0;

    while (temp > 0)
    {
        int rem = temp % 10;
        reversed_number = (reversed_number * 10) + rem;
        temp = temp / 10;
    }

    printf("%d\n", reversed_number);
}