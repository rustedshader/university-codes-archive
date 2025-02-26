// Find the second largest element in an array.

#include <stdio.h>

int second_max(int *arr, int max_len)
{
    if (max_len < 2)
    {
        return -1;
    }

    int max, second_max;

    if (arr[0] > arr[1])
    {
        max = arr[0];
        second_max = arr[1];
    }
    else
    {
        max = arr[1];
        second_max = arr[0];
    }

    for (int i = 2; i < max_len; i++)
    {
        if (arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] < max)
        {
            second_max = arr[i];
        }
    }
    return second_max;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 3, 4, 6, 7, 9};
    int second_max_number = second_max(arr, 10);
    printf("%d\n", second_max_number);
}