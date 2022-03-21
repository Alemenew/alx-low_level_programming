#include "main.h"

/**
 * print_rev - print the revers of the string
 *
 * @s: hold all of the charactor
 */

void print_rev(char *s)

{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	while (s[j])
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
