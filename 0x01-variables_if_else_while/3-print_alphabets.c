
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;
	char cap;

	for (alph = 'a';  alph <= 'z'; alph++)
	{
		putchar (alph);
	}
	for (cap = 'A'; cap  <= 'Z'; cap++)
	{
		putchar (cap);
	}
	putchar ('\n');
	return (0);
}
