#include "main.h"
/**
 * _printf - Entry point
 * @format:..
 * Return: integer
 */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	va_list args;
	sp_t conv[] = {
		{"c", _printf_char},
		{"s", _printf_str},
		{"%", _printf_percent},
		{NULL, NULL}
	};
	int i, j;
	int len = 0;

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			len++;
			write(1, &format[i], 1);
		}
		else
		{
			len++;
			i++;
			j = 0;
			while(j < 3)
			{
				if (format[i] == conv[j].sp[0])
				{
					len = len + conv[j].f(args);
				}
				j++;
			}
		}
		i++;
	}
	va_end(args);
	return (len);
}
