#include <stdio.h>
#include <string.h>

int main()
{

    FILE *fptr;
    fptr = fopen("test.txt", "w");
    char *str = "Hi there how are you";

    if (fptr == NULL)
    {
        printf("Error of opening file");
    }

    fwrite(str, sizeof(char), strlen(str), fptr);
    fclose(fptr);
    return 0;
}
