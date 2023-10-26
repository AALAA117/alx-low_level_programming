#include "main.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y.
 * @x: value.
 * @y: power.
 * Return: integer.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else
	{
		if (y < 0)
		{
			return (-1);
		}
		else
		{
			y = y - 1;
			return (x * _pow_recursion(x, y));
		}
	}
}
