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
	int i;

	for (i = 0; i <= accept[i]; i++)
	{
		if (s[i] == accept[i])
		i++;
	}
	return (i + 1);
}
