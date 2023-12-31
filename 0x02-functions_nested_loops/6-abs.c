#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: number
 * Return: integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -(n);
		return (n);
	}
	else
	{
		return (n);
	}
}
