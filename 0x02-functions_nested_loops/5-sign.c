#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n : number
 *
 * Return: integer
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
