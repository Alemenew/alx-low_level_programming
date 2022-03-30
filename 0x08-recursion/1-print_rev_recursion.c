#include "main.h"

/**
 * _print_rev_recursion - print a string in the revers form
 *
 * @s: holds string.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
