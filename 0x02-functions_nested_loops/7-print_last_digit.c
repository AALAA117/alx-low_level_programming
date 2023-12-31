#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: number
 * Return: integer
 */
int print_last_digit(int n)
{
	int c;

	if (n < 0)
	{
		n = -(n);
	}
	c = n % 10;
	_putchar(c + '0');
	return (c);
}
