#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arrptr, i = 0, t = min;

	if (min > max)
		return (0);
	arrptr = malloc((max - min + 1) * sizeof(int));

	if (!arrptr)
		return (0);
	while (i <= max - min)
		arrptr[i++] = t++;
	return (arrptr);
}

