#include "main.h"
#include <stdio.h>

/**
 * _strstr - locat a substring
 * @haystack: sting
 * @needle: string substring
 * Return: pointer to beginning of string else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, c;

	c = 0;
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + c] != '\0' && haystack[i + c] != '\0'
			    && needle[j + c] == haystack[i + c])
		{
			if (haystack[i + c] != needle[j + c])

				break;
			c++;
		}
		if (needle[j + c] == '\0')

			return (&haystack[i]);
		i++;
		j++;
	}

	return (NULL);
}
