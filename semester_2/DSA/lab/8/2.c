#include <stdio.h>

void sort_arr()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int swaps = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        int min = arr[i];
        int min_index = 0;
        int min_index_save = min_index;
        for (int k = i + 1; k < 5; k++)
        {
            if (arr[k] < min)
            {
                min_index = k;
            }
        }

        if (min_index_save == min_index)
        {
            printf("No swap needed\n");
        }
        else
        {
            swaps += 1;
            // printf("%d %d\n", arr[i], arr[min_index]);
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
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