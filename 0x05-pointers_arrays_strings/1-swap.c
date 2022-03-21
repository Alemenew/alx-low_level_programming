#include "main.h"

/**
 * swap_int - for swap a and b
 * @a: character holdes a varable
 *
 * @b:character holds b varable
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
