#include "main.h"

/**
 * more_numbers - display 10 times
 * Description: by using wile loop
 */
void more_numbers(void)
{
	int n, i;

	n = 0;
	while (n < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
			i++;
		}
		n++;
		_putchar('\n');
	}
}
