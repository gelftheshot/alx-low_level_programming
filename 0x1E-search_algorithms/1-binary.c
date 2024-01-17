#include "search_algos.h"

/**
 * print_arr - Prints the elements of an array.
 * @array: A pointer to the first element of the array to print.
 * @size: The number of elements in the array.
 *
 * Return: void
 */
void print_arr(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search_real - Performs binary search on an array.
 * @array: A pointer to the first element of the array to search.
 * @start: The starting index of the subarray to search.
 * @end: The ending index of the subarray to search.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1
 *	if the value is not found
 *         or the array is NULL.
 */
int binary_search_real(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (start > end)
		return (-1);

	mid = start + (end - start) / 2;

	printf("Searching in array: ");
	print_arr(array + start, end - start + 1);

	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		return (binary_search_real(array, mid + 1, end, value));
	else
		return (binary_search_real(array, start, mid - 1, value));
}

/**
 * binary_search - Calls binary_search_real to perform binary
 * search on an array.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if the value
 * is not found or the array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_search_real(array, 0, size - 1, value));
}
