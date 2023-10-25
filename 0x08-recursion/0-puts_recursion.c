#include "main.h"
/**
 * _puts_recursion - prints a string.
 * @s : string
 */
void _puts_recursion(char *s)
{
	int i = 0;
	int len = 0;

	if (*s == '\0')
	{
		return;
	}
	else
	{
		while (*s != ' ' || *s != '\0')
		{
			_putchar(s[i]);
			len++;
			s++;
		}
		_puts_recursion(s + len);
	}
	_putchar('\n');
}
