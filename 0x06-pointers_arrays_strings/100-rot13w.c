#include "holberton.h"

/**
  * print_number - print number of letters
  * @n: integer
  * Return: zero always
 **/

void print_number(int n)
{
	unsigned int tom;

	tom = n;

	if (n < 0)
	{
		_putchar('-');
		tom = -n;
	}

	if (tom / 10 != 0)
	{
		print_number(tom / 10);
	}
	_putchar((tom % 10) + '0');
}