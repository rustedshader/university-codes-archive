#include <stdio.h>

// 59 -> 95
// 59  % 10 = 9
// 59 - 9 = 50 / 10 = 5
// 9 * 10 + 5
// Something like this ~~ 2 Digit Working

// 697 -> 796
// 697 % 100 -> 97
// 697 % 10 -> 7
// 697 // 100 -> 6
// 97 // 10 -> 9
// 7 // 1 -> 7

// 7 * 100 = 700
// 700 + 97 = 797

int reverse_number(int num)
{
    int z = num % 10;
    int k = num - z;
    int j = num / 10;
    int r = z * 10 + j;
    return r;
}
int main()
{
    printf("%d\n", reverse_number(25));
}