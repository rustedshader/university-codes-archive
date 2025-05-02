// Write a c program to check the palindrome number.
#include <stdio.h>

int main()
{
    int number = 1234;
    int temp = number;
    int reversed_number = 0;

    while (temp > 0)
    {
        int rem = temp % 10;
        reversed_number = (reversed_number * 10) + rem;
        temp = temp / 10;
    }

    printf("Original number: %d\n", number);
    printf("Reversed number: %d\n", reversed_number);

    if (number == reversed_number)
        printf("%d is a palindrome\n", number);
    else
        printf("%d is not a palindrome\n", number);

    return 0;
}