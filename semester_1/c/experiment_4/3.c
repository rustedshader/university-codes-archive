#include <stdio.h>

void test_func()
{
    #error generated
    printf("%d\n",test_var);
}


int main(){

    int test_var = 5;
    printf("%d\n", test_var );
}

