#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array if int.
 * @width: width of arr.
 * @height: height of arr.
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gout;
	int i, j;

	gout = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		gout[i] = malloc(width * sizeof(int));

	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gout[i][j] = 0;

	return (gout);
}
