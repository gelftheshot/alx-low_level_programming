#include "main.h"

/**
 * print_diagonal - prits digonal of backslash
 * @n: is number of backslash
 *
 *
 * Return: digonal
 */
void print_diagonal(int n)
{
	int i = 0;

	int j = 0;

	if (n > 0)
{
		for (; i < n; i++)
{
			for (j = 0; j < i; j++)
{
				_putchar(' ');
}
			_putchar(92);
			_putchar('\n');
}
}
	else
{
		_putchar('\n');
}
}
