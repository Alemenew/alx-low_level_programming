#include "main.h"
/**
 * puts2 - updated by 2
 *
 * @str: hold string
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0';  i++)
	{
		;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
