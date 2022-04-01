#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entery point
 * @argc: count of the argument supplied to the program
 * @argv: array of pointer to the string declearation of the array
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)

{
	int sum;
	int i;
	int result = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = atoi(argv[argc]);
		result += sum;
	}
	printf("%d\n", result);
	return (0);

}
