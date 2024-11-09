/* Highest Perimeter */
/* Not using terneray operator has to fix it */
#include <stdio.h>

int main()
{
    int l1, b1, l2, b2, l3, b3;
    printf("Enter Values for triangle 1\n");
    printf("Enter Length\n-> ");
    scanf("%d", &l1);
    printf("Enter Breadth\n-> ");
    scanf("%d", &b1);
    printf("Enter Values for triangle 2\n");
    printf("Enter Length\n-> ");
    scanf("%d", &l2);
    printf("Enter Breadth\n-> ");
    scanf("%d", &b2);
    printf("Enter Values for triangle 3\n");
    printf("Enter Length\n-> ");
    scanf("%d", &l3);
    printf("Enter Breadth\n-> ");
    scanf("%d", &b3);

    float perimeter_1 = 0.5 * (l1 + b1);
    float perimeter_2 = 0.5 * (l2 + b2);
    float perimeter_3 = 0.5 * (l3 + b3);

    if (perimeter_1 > perimeter_2 && perimeter_1 > perimeter_3)
    {
        printf("Triangle 1 has highest parameter\n");
    }
    if (perimeter_2 > perimeter_1 && perimeter_2 > perimeter_3)
    {
        printf("Triangle 2 has highest parameter\n");
    }
    if (perimeter_3 > perimeter_1 && perimeter_3 > perimeter_2)
    {
        printf("Triangle 3 has highest parameter\n");
    }

    return 0;
}
