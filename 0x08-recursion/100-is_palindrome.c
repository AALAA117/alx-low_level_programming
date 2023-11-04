#include "main.h"
/**
 * is_palindrome - palindrome
 * @s: string.
 *
 * Return: integer
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	if (len == 0 || len == 1)
	{
		return (1);
	}
	else
	{
		len = len - 1;
		if (*s == *(s + len))
		{
			return (is_palindrome(s + 1));
		}
		else
		{
			return (0);
		}
	}
}
