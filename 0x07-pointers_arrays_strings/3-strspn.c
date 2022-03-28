#include "main.h"

/**
 * _strspn -function is used for to gets the length of
 * a prfix substring.
 * @s: source string
 * @accept: accept string
 * Return: the postion of last element
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				n = n + 1;
			}
		}
		if (n == 0)
		{
			return (c);
		}
	}
	return (0);
}
