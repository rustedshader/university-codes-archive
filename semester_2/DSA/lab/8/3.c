#include <stdio.h>

void sort_arr()
{

    int arr[5] = {5, 4, 3, 2, 1};
    int swaps = 0;
    for (int i = 1; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        for (int k = 0; k < i; k++)
        {
            if (arr[k] > arr[i])
            {
                swaps += 1;
                int temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nTotal Swaps Needed: %d\n", swaps);
}

int main()
{
    sort_arr();
}