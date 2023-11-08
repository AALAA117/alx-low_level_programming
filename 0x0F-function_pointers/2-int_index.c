#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array:..
 * @size:..
 * @cmp:..
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 98 || cmp(array[i]) == -98)
		{
			return (i);
		}
	}
	return (-1);
}
