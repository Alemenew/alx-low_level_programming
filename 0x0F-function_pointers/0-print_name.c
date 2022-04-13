#include "function_pointers.h"
/**
 * print_name - uses to print
 * @name: is a string
 * @f: is a pointer of a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;

	(*f)(name);
}
