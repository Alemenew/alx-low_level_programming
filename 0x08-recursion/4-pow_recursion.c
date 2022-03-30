#include "main.h"

/**
 * _pow_recursion - return of x raised to the power of y
 * @x: x values
 * @y: holds y values
 * Return: if y < 0 -1 else retrn power of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
