#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: is the string of binery numbers
 * Return: if base 10 numbers
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num++;
	}
	return (num);
}
