#include <stdio.h>
#include <limits.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: number
 * Return: integer
 */
int print_last_digit(int n)
{
	long int c = n;

	if (c < 0)
	{
		c = -(c);
	}
	c = c % 10;
	_putchar(c + '0');
	return (c);
}
