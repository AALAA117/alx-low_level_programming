#include "variadic_functions.h"

/**
 * print_strings - check the code
 * @separator:..
 * @n:...
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (separator == NULL)
	{
		return;
	}
	else
	{
		i = 0;
		while (i < n - 1)
		{
			if (va_arg(args, char*) == NULL)
			{
				printf("%s","(nil)");
			}
			else
			{
				printf("%s%s", va_arg(args, char*), separator);
			}
			i++;
		}
		printf("%s\n", va_arg(args, char*));
	}
	va_end(args);
}
