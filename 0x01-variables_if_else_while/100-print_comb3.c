#include <stdio.h>
/**
*main- all possible combination of two digit num.
*Return: it return always zero
*/
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
	for (j = i; j <= '9'; j++)
	{
		if (i != j)
		{
			putchar(i);
			putchar(j);
		if (i == '8' && j == '9')
			break;
		putchar(',');
		putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}



