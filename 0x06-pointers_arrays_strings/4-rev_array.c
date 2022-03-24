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
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
