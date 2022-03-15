#include "main.h"
/**
 * _islower - Check description
 * Description: It print the alphabet if it is upper 0 and if the lower 1
 * @c: The character it hold the alphabet
 * Return: Always 0 (Success)
 */


int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}

	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	_putchar ('\n');
	return (0);
}
