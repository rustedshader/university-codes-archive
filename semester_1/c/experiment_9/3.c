#include <stdio.h>

int main()
{
    FILE *f;
    f = fopen("test.txt", "r");
    char buffer[1024];

    if (f == NULL)
    {
        printf("Error opening the file !");
    }

    unsigned long x = fread(buffer, sizeof(char), sizeof(buffer) - 1, f);

    buffer[x] = '\0';

    printf("%s\n", buffer);
    return 0;
}