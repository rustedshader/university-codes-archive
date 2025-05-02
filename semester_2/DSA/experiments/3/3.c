// Write a recursive function to calculate the sum of elements in an array.
#include <stdio.h>

int rec_sum(int *arr, int sum, int n, int end)
{
    if (n == end)
    {
        return sum;
    }
    sum += arr[n];
    return rec_sum(arr, sum, n + 1, end);
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5};
    int sum = rec_sum(arr, 0, 0, 6);
    printf("%d\n", sum);
}