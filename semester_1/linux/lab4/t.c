#include <stdio.h>

struct car
{
	int price;
	int year;
	char name[50];
};

int main()
{

	struct car c[3];
	int max = 0;

	for (int i = 0; i < 3; i++)
	{
		printf("Enter the car name\n: ");
		scanf("%s", c[i].name);
		printf("Enter the car age\n: ");
		scanf("%d", &c[i].year);
		printf("Enter the car price\n: ");
		scanf("%d", &c[i].price);
		if (c[i].year > max)
		{
			max = c[i].year;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (c[i].year == max)
		{
			if (c[i].price > 1000000)
			{
				printf("%s\n", c[i].name);
				printf("%d\n", c[i].year);
				printf("%d\n", c[i].price);
			}
		}
	}
	return 0;
}
