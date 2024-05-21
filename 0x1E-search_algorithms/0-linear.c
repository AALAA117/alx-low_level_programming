#include "search_algos.h"
/**
 * linear_search -  function that searches for a value in an array of integers
 * @array:..
 * @size:..
 * @value:..
 * Return: value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == value)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				return (i);
			}
			else
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			}
		}
		return (-1);
	}
	return (-1);
}
