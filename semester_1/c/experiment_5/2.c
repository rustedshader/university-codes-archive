#include <stdio.h>

int main()
{
    int arr_len;
    printf("How many numbers  do you want to enter: ");
    scanf("%d", &arr_len);
    int arr[arr_len];
    int zero_count = 0;
    int positive_count = 0;
    int negative_count = 0;
    for (int i = 0; i <= arr_len - 1; i++)
    {
        int temp;
        printf("Enter the %d index number: ", i);
        scanf("%d", &temp);
        arr[i] = temp;
    }
    for (int i = 0; i <= arr_len - 1; i++)
    {
        if (arr[i] == 0)
        {
            zero_count += 1;
        }
        if (arr[i] > 0)
        {
            positive_count += 1;
        }
        if (arr[i] < 0)
        {
            negative_count += 1;
        }
    }
    printf("------------------------------------------------------------------------\n");
    printf("Zero Number are: %d\nPositive Numbers are %d\nNegative Numbers are %d\n", zero_count, positive_count, negative_count);
    return 0;
}
