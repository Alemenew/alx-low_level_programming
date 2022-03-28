#include "main.h"

/**
 * _memset -fills memory with a constant byte.
 * @s: holds the collection of characters
 * @b: holds constant byte
 * @n: number of bytes of memory to fill
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
