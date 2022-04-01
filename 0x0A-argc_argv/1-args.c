#include <stdio.h>
#include <stdio.h>

/**
 * main - Entery point
 * @argc: count of the argument supplied to the program
 * @argv: array of pointer to the string declearation of the array
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
