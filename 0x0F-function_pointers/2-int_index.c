#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: Name passed
 * @size: Number of iterations
 * @cmp: Points to a function
 * Return: Always 0 (success)
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
	{
		return(-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (index = 0; index < size; index++)
		{
			if(cmp(array[index]) != 0)
			{
				return (index);
			}
		}
	}
	return(-1);
}
