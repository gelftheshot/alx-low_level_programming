#include "main.h"

/**
 * rev_string - reverse string
 * @c: string
 * Return: void
 */

void rev_string(char *c)
{
	int i, max, half;
	char first, last;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	max = i - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = c[max - half];
		last = c[half];
		c[half] = first;
		c[max - half] = last;
		half--;
	}
}
