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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
