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
	char *c;

	va_start(args, n);
	if (separator == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			c = va_arg(args, char*);
			if (c == NULL)
			{
				printf("(nil)");
			}
			else
			{
				if (i != n - 1)
				{
					printf("%s%s", c, separator);
				}
				else
				{
					printf("%s", c);
				}
			}
		}
		putchar('\n');
	}
	va_end(args);
}
