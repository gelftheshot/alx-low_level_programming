#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int index = 0;
	char letter = 'a';

	while (index < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		index++;
	}
}
