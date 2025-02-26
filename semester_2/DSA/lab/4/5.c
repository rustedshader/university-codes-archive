// C Program to Cyclically Permute the Elements of an Array

#include <stdio.h>

int main()
{
    int arr[30];
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    arr[n] = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}