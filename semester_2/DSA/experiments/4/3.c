// Write a C program to check the Identity matrix.

#include <stdio.h>

#define SIZE 3

int main()
{
    int A[SIZE][SIZE];
    int row, col = 0;

    for (row = 0; row < SIZE; row++)
    {
        for (col = 0; col < SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    int isIdentity = 1;

    for (row = 0; row < SIZE; row++)
    {
        for (col = 0; col < SIZE; col++)
        {
            if (row == col && A[row][col] != 1)
            {
                isIdentity = 0;
                break;
            }
            if (row != col && A[row][col] != 0)
            {
                isIdentity = 0;
                break;
            }
        }
    }

    if (isIdentity)
    {
        printf("It is a Identity Matrix\n");
    }
    else
    {
        printf("It is not an Indentity Matrix\n");
    }
    return 0;
}