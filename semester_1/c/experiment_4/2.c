#include <stdio.h>

void some_function()
{
    int x = 5;
    printf("%d", x);
}

int main()
{
    some_function();
    // Error Generated
    // printf("%d", x);
    return 0;
}
