#include <stdio.h>

int main()
{
    float c;
    printf("Enter Temperature in Celcius\n -> ");
    scanf("%f", &c);
    printf("Your Temperature in Fahreneit is %.2f\n", (c * (9.0 / 5.0)) + 32);
    return 0;
}
