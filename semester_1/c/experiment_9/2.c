#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    char buffer[1024];

    if (fptr == NULL)
    {
        printf("Error opening the file !");
    }

    unsigned long bytes_read = fread(buffer, sizeof(char), sizeof(buffer) - 1, fptr);
    buffer[bytes_read] = '\0';

    printf("%s\n", buffer);

    fclose(fptr);

    return 0;
}