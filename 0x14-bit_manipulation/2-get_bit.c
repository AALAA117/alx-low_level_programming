#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index:..
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
