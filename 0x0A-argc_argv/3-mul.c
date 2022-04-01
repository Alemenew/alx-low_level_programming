#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entery point
 * @argc: count of the argument supplied to the program
 * @argv: array of pointer to the string declearation of the array
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1)

	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
