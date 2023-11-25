#include "main.h"
/**
 * _printf_str - print string
 * @args:..
 * Return: integer.
 */
int _printf_str(va_list args);
int _printf_str(va_list args)
{
	char *str = va_arg(args, char*);
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (write(1, str, len));
}
