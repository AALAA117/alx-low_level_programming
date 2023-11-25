#include "main.h"
/**
 * _printf_char - Entry point
 * @args:..
 * Return: integer.
 */
int _printf_char(va_list args);
int _printf_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));

}
