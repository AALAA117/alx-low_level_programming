#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: min numb.
 * @max: max numb.
 * Return: integer.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; min <= max; i++)
		{
			ptr[i] = min;
			min++;
		}
	}
	return (ptr);
}
