#include "main.h"
/**
 * _printf_percent - print percent
 * @args:...
 * Return: integer
 */
int _printf_percent(va_list args __attribute__((unused)));
int _printf_percent(va_list args __attribute__((unused)))
{
	return (write(1, "%", 1));
}
