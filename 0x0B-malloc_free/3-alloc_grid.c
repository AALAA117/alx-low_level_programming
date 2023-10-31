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

	if (width == 0 || width < 0 || height == 0 || height < 0)
	{
		return (NULL);
	}
	ptr = malloc(width * height * 4);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (h < height)
		{
			while (w < width)
			{
				ptr[h][w] = 0;
				w++;
			}
			h++;
		}
	}
	free(ptr);
	return (ptr);
}
