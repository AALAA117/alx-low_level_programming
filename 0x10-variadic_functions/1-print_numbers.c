#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		if (i == 0)
		{
			printf("%d", x);
		}
		else
		{
			printf("%s %d", separator, x);
		}
	}
	va_end(args);
	printf("\n");
}
