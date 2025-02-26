// C Program to Find the Largest Sum of Contiguous Subarray of an Array

#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int t_max = 0;
            for (int k = i; k <= j; k++)
            {
                // printf("%d ", arr[k]);
                t_max += arr[k];
            }

            if (t_max > max)
            {
                max = t_max;
            }
        }
    }

    printf("%d\n", max);
}