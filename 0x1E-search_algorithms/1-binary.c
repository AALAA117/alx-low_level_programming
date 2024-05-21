#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array:..
 * @size:..
 * @value:..
 * Return: integer
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, i;
	size_t high = size - 1;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
			{
				printf("%d\n", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
