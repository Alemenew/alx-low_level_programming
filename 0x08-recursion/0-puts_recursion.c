#include "main.h"
/**
 * _puts_recursion - printes a string followed by a new line.
 *@s: holds a string.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
