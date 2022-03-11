
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ite;
	int d = 'a';

	for (ite = 0; ite < 10; ite++)
	{
		putchar(ite + 48);
	}
	while (d <= 'f')
	{
		putchar(d);
		d++;
	}
	putchar(10);
	return (0);
}
