#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings, followed by a new line
 *
 * @separator: This is the input separator
 * @n: This is the number of items
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		char *x = va_arg(args, char *);

		if (x != NULL)
		{
			printf("%s", x);
		}
		else
		{
			printf("(nill)");
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

