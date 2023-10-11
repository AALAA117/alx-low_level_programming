#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: pointer to a name.
 * @f: address of function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0)
	{
		return;
	}
	f(name);
}
