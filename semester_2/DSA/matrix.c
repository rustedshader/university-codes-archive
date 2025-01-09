#include <stdio.h>

// 1 * 1 +

// 1 2 3 4 .  1 2 3 4 == 10
// 1 2 3 4 .  1 2 3 4 == 10
// 1 2 . 1 2 == 3
// 1 2 . 1 2

int main()
{
    int mat1[2][2] = {{1, 2}, {1, 2}};
    int mat2[2][2] = {{1, 2}, {1, 2}};
    int result[2][2] = {{0, 0}, {0, 0}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int k = 0; k < 2; k++)
        {
            printf("%d\n", result[i][k]);
        }
    }
}