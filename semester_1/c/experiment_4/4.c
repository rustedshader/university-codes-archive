#include <stdio.h>

void static_function()
{
    static int x = 10;
    int y = 10;
    printf("Non Static: %d Static: %d\n", y += 1, x += 1);
}

int main()
{
    static_function();
    static_function();
    static_function();
    return 0;
}
