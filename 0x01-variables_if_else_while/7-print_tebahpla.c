#include <stdio.h>
/**
*main- print alphabet in revers order.
*Return: always zero.
*/
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
