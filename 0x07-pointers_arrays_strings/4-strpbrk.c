#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - to searche a string
 * @s: source string
 * @accept: hold finding characters
 * Return: searching string or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
