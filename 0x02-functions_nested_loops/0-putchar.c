#include "main.h"

/**
 * main - the main function print _putchar
 *
 * Description: prints _putchar
 *
 * Return: the function will return to 0 if it works
 */

int main(void)
{
	char word[9] = "_putchar";
	int a = 0;

	for (a = 0; a < 8; a++)
	{
		_putchar(word[a]);
	}
	_putchar('\n');

	return (0);
}
