#include "main.h"

/**
 * print_sign - prints -,+,0
 * @i: i is an integer
 *
 * Return: 1 if post , 0 if zero, -1 nega
 */

int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
