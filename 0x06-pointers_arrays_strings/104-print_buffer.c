#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int g, j, i;

	g = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (g < size)
	{
		j = size - g < 10 ? size - g : 10;
		printf("%08x: ", g);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + g + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + g + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		g += 10;
	}
}
