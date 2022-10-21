#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: An input integer
 * Return: nothing
 */
void print_triangle(int size)
{
	if (size > 0)
{
		int i, j, k;

		for (i = 0; i < size ; i++)
{
		for (j = size - 1; j > i; j--)
{
			_putchar(' ');
}
		for (k = 0; k < i + 1; k++)
{
			_putchar(35);
}
		_putchar('\n');
}
}
		else
{
			_putchar('\n');
}
}
