#include "main.h"

/**
 *print_alphabet - print from the alphabet in order of a to z
 *like for example a b c d ......... z
 *
 *Return: void means it will not return any thing
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
