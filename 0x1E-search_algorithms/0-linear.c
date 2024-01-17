#include "search_algos.h"

/**
 * linear_search - Performs linear search on an array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Description: This function performs a linear search on the array
 * to find the value. It iterates over each element in the array,
 * comparing it with the value. If a match is found, it returns the
 * index of the matching element. If no match is found or the array
 * is NULL, it returns -1.
 *
 * Return: First index where value is located, or -1 if value is not
 * present in the array or if array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	int j;
	int i = size;

	if (!array)
		return (-1);
	for (j = 0; j < i; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		}
	}
	return (-1);
}
