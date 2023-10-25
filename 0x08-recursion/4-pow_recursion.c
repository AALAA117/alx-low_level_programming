#include "main.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y.
 * @x: value.
 * @y: power.
 * Return: integer.
 */
int _pow_recursion(int x, int y)
{
	int n = 1;
	int pow = 1;

	if (n == y)
	{
		return (pow);
	}
	else
	{
		if (y < 0)
		{
			return (-1);
		}
		else
		{
			if (n != y)
			{
				pow = x *  _pow_recursion(x, n++);
			}
			else
			{
				return (0);
			}
		}
	}
	return (pow);
}
