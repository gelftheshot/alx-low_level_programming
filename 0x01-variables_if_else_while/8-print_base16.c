#include <stdio.h>
/**
*main- prints hexadecimal number all single digit.
*Return: it will return always zero.
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
