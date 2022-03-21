#include "main.h"

/**
 * rev_string - print revers of words
 *
 * @s: hold the characters of strings
 */

void rev_string(char *s)
{

	int i, j;
	char ch;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	i = 0;

	while (i < j)
	{
		ch = s[j];
		s[j] = s[i];
		s[i] = ch;

		i++;
		j--;
	}
}
