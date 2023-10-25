#include "main.h"
/**
 * _puts_recursion - prints a string.
 * @s : string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(s[i]);
		s++;
		_puts_recursion(s);
	}
	_putchar('\n');
}
