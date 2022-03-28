#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: the destination of string
 * @src: the source of string
 * @n: the number of bytes of memory to fill the area
 * Return: pointer to memory 'dest'
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
