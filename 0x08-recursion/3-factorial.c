#include "main.h"
/**
 * factorial - used for factorial n givin numbers
 *
 * @n: holds a number
 * Return: n factorial
 */

int factorial(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
