#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n : number
 * Return: integer.
 */
int factorial(int n)
{
	int fact = 1;

	if (n == 0)
	{
		return (1);
	}
	else
	{
		if (n < 0)
		{
			return (-1);
		}
		else
		{
			fact = fact * n;
			n--;
			factorial(n);
		}
	}
	return (fact);

}
