#include "main.h"

/**
 * reverse_array  - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: display revers array.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	while (i <= n - 1)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		i++;
		n--;
	}
}
