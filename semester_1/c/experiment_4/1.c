#include <stdio.h>

int global_variable = 7;

void some_function(int x)
{
    printf("%d\n", x);
}

int main()
{
    printf("%d\n", global_variable);
    some_function(global_variable);
    return 0;
}
