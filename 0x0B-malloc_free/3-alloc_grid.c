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
	int w = 0;
	int h = 0;
	int j;
	int i;

	if (width == 0 || width < 0 || height == 0 || height < 0)
	{
		return (NULL);
	}
	ptr = malloc(height * 4);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * 4);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr[i]);
			return (NULL);
		}
	}
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			ptr[h][w] = 0;
			w++;
		}
		h++;
	}
	return (ptr);
}
