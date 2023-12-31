#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: character
 *
 * Return: integer.
 */
int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
