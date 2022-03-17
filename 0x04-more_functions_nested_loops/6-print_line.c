#include "main.h"

/**
 * print_line - print lines
 * @n: number of time underscore printd
 * Return: the line.
 */
void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		_putchar(95);

		a++;
	}
	_putchar(10);
}
