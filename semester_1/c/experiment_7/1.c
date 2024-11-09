#include <stdio.h>

struct complex_no
{
    int real_part;
    int imaginary_part;
};

void complex_no_function()
{
    struct complex_no c1, c2;

    printf("Enter the real part of complex no 1: ");
    scanf("%d", &c1.real_part);
    printf("Enter the imaginary part of complex no 1: ");
    scanf("%d", &c1.imaginary_part);

    printf("Enter the real part of complex no 2: ");
    scanf("%d", &c2.real_part);
    printf("Enter the imaginary part of complex no 2: ");
    scanf("%d", &c2.imaginary_part);

    printf("The sum of complex number is : %d + %di\n", c1.real_part + c2.real_part, c1.imaginary_part + c2.imaginary_part);
    printf("The subraction of complex number is : %d + %di", c1.real_part - c2.real_part, c1.imaginary_part - c2.imaginary_part);
}

int main()
{

    complex_no_function();
    return 0;
}
