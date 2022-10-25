#include "main.h"

/**
 * print_rev - printc ctring backwardc
 * @c: ctring
 * Return: void
 */

void print_rev(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(c[i]);
		i--;
	}
	_putchar('\n');
}
