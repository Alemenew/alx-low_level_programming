#include <stdio.h>

void print_alphabet(void);
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	print_alphabet();
}

void print_alphabet(void)
{
	for (char alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
}
