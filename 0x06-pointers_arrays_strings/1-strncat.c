#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: destination
 * @src: source string
 * @n: hold the limitation of the character
 *
 * Return: String
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0' && n > 0;  j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
