#include "main.h"
/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: integer
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int j;
	int i;

	ptr = malloc(sizeof(int) * height);
	if (width <= 0 || height <= 0 || ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			*(ptr + i) = malloc(sizeof(int) * width);
			if (*(ptr + i) == NULL)
			{
				while (j < width)
				{
					free(ptr[j]);
					j++;
				}
				free(ptr);
				return (NULL);
			}
			else
			{
				j = 0;
				for (; j < width; j++)
				{
					ptr[i][j] = 0;
				}
			}
		}
	}
	return (ptr);
}
