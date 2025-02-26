// Write a recursive function to find the maximum element in an array

#include <stdio.h>

int rec_max(int n, int k, int *arr, int max)
{
    if (n == max)
    {
        return k;
    }
    int val = arr[n];
    if (val > k)
    {
        return rec_max(n + 1, val, arr, max);
    }
    else
    {
        return rec_max(n + 1, k, arr, max);
    }
}

int main()
{
    int arr[10] = {
        1,
        2,
        0,
        3,
        9,
        5,
    };
    int max = rec_max(0, arr[0], arr, 10);
    printf("Maximum element: %d\n", max);
    return 0;
}