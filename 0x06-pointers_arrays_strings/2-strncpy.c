#include "main.h"
/**
 * _strncpy - function is used for coping the string
 *
 * @dest: destination string.
 * @src: source string
 * @n: limit of string
 * Return: Coped string
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
