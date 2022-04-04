#include<stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initalizes.
 * @size: the number of array
 * @c: character
 * Return: NULL pointer if size == 0 return pointer if it is success
 */


char *create_array(unsigned int size, char c)

{
	char *p = (char *)malloc(sizeof(c) * size);

	if (size == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		p[size] = c;
	}
	return (p);
}
