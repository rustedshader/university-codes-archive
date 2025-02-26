// Write a C program to find the sum of the main diagonal elements of a matrix.

#include <stdio.h>

#define SIZE 3

int main()
{
    int A[SIZE][SIZE];
    int row, col, sum = 0;

    for (row = 0; row < SIZE; row++)
    {
        for (col = 0; col < SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    for (row = 0; row < SIZE; row++)
    {
        sum += A[row][row];
    }

    printf("Sum of diagnol elements: %d\n", sum);
}