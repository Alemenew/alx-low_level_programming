#include "main.h"
/**
 * string_toupper - change lower to upper
 * @n: string of character
 * Return: upper latter
 */
char *string_toupper(char *n)
{
	while (*n)
	{
		if (*n >= 97 && *n <= 122)
		{
			*n = *n - 32;
		}
		n++;
	}
	return (n);
}
