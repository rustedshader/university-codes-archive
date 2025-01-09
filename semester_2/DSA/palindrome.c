#include <stdio.h>
#include <string.h>

int string_length(char *input_string)
{
	int l;
	int i = 0;

	while (input_string[i] != NULL)
	{
		l += 1;
		i += 1;
	}
	return l;
}

int palindrome_check(char *input_string)
{
	int l = 0;
	// int sl = string_length(input_string);
	int sl = strlen(input_string);
	// printf("%d\n", sl);
	int m = sl / 2;
	sl = sl - 1;
	for (int i = 0; i < m; i++, sl--)
	{
		if (input_string[i] != input_string[sl])
		{
			return -1;
		}
	}
	return 1;
}

int main()
{
	printf("%d\n", palindrome_check("shubhang"));
}
