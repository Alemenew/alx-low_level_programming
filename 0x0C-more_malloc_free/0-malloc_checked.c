#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to be allocate
 * Return: a pointer to allocated memory or NULL if it fails
 */

void *malloc_checked(unsigned int b)

{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
