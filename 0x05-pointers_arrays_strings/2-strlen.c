#include "main.h"

/**
 * _strlen - print the strings
 *
 * @s: hold string
 * Return: the length of string
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s++)
	{
	c++;
	}
	return (c);
}
