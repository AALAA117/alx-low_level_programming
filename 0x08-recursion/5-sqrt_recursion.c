#include "main.h"
/**
 * _sqrt_recursion_handle - returns the natural square root of a number.
 * @n: number
 * @y: squared number
 * Return: integer
 */
int _sqrt_recursion_handle(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);
	}
	else
	{
		y = y + 1;
		return (_sqrt_recursion_handle(n, y));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_handle(n, 1));
	}
}
