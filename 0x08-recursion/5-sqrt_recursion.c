#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
/**
 * sqr - Makes possible to evaluate from 1 to n
 * @n: same number as n
 * @val: number that iterates from 1 to n
 *
 * Return: On success 1.
 */
int sqr(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (sqr(n, val + 1));
	else
		return (-1);
}

