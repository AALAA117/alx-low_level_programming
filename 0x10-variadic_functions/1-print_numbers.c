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

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i < n)
	{
		if (separator == NULL)
		{
			printf("%s", "");
		}
		else
		{
			if (i < n - 1)
			{
				printf("%d%s", va_arg(args, int), separator);
			}
			else
			{
				printf("%d", va_arg(args, int));
			}
		}
		i++;

	}
	putchar('\n');
}
