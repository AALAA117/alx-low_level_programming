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

	if ((n & mask) != 0)
		return (1);
	else if ((n & mask) == 0)
		return (0);
	else
		return (-1);
}
