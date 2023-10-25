#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s : string
 * Return: integer.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		len++;
		return (len);
	}
	else
	{
		len++;
		s++;
		return (_strlen_recursion(s));
	}
	return (len);
}
