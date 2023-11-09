#include "variadic_functions.h"

/**
 * print_numbers - check the code
 * @separator:..
 * @n:..
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	if (separator == NULL)
	{
		return;
	}
	while (i < n - 1)
	{
		printf("%d%s", va_arg(args, int), separator);
		i++;
	}
	printf("%d\n", va_arg(args, int));
}
