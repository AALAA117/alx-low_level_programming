#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_prime(n, 2));
}
/**
 * check_prime - Makes possible to evaluate from 1 to n
 * @n: same number as n
 * @othrn: number that iterates from 1 to n
 *
 * Return: On success 1.
 */
int check_prime(int n, int othrn)
{
	if (othrn >= n)
		return (1);
	else if (n % othrn == 0)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}
