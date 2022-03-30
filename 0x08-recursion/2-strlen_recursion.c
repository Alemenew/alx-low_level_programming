#include "main.h"

/**
 * _strlen_recursion - count the length of the string.
 *
 * @s: holds string.
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)

{
	int i = 0;

	if (*s == '\0')
		return (0);

	i = 1 + _strlen_recursion(s + 1);

	return (i);
}
