#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * Return: it always return 0;
 */
int main(void)
{
	int gelf = 'a';

	for (gelf = 'a'; gelf <= 'z'; gelf++)
	{
		if (gelf != 'e' && gelf != 'q')
		{
			putchar(gelf);
		}
	}
	putchar('\n');
	return (0);
}

