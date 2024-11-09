#include <stdio.h>

int main()
{
    int arr_len;
    printf("How many numbers  do you want to enter: ");
    scanf("%d", &arr_len);
    int arr[arr_len];
    int user_freq;
    int count = 0;
    for (int i = 0; i <= arr_len - 1; i++)
    {
        int temp;
        printf("Enter the %d index number: ", i);
        scanf("%d", &temp);
        arr[i] = temp;
    }
    printf("Enter the number you want the frequency: ");
    scanf("%d", &user_freq);

    for (int i = 0; i <= arr_len - 1; i++)
    {
        if (arr[i] == user_freq)
        {
            count += 1;
        }
    }
    printf("The number %d frequency is -> %d\n", user_freq, count);
    return 0;
}
