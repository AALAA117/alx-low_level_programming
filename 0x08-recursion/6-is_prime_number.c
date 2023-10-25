#include "main.h"
/**
 * is_prime_number - retrun 1 if input is prime.
 * @n : input number
 * Return: integer
 */
int is_prime_number(int n)
{
	int num = 2;
	int i = 3;

	if ((n % 2 == 0 && n != 2) || n == 1 || n < 0)
	{
		return (0);
	}
	else
	{
		if (num * i == n)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	i++;
	return (is_prime_number(n));
}
