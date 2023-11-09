#include "variadic_functions.h"
/**
 * print_char - check the code
 * @separator:..
 * @args:..
 * Return: nothing.
 */
void print_char(char *separator, va_list args);
void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}
/**
 * print_integer - check the code
 * @separator:..
 * @args:..
 * Return: nothing.
 */
void print_integer(char *separator, va_list args);
void print_integer(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}
/**
 * print_float - check the code
 * @separator:..
 * @args:..
 * Return: nothing.
 */
void print_float(char *separator, va_list args);
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}
/**
 * print_str - check the code
 * @separator:..
 * @args:..
 * Return: nothing.
 */
void print_str(char *separator, va_list args);
void print_str(char *separator, va_list args)
{
	char *str = va_arg(args, char*);
	printf("%s%s", separator, ((str == NULL) ? "(nil)" : str));
}
/**
 * print_all - check the code
 * @format:..
 * Return: nothing
 */
void print_all(const char * const format, ...);
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j;
	char *separator = "";
	op_t ops[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == ops[j].n[0])
			{
				ops[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}
