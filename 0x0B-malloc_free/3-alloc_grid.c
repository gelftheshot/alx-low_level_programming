
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - nested loop
 * @width: width
 * @height: height
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			ptr[i][n] = 0;
		}
	}
	return (ptr);
}