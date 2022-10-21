#include "main.h"
#include <stdio.h>
/**
*main - fizzbuzz print number or fizz or buzz
*
*Return: always 0;
**/
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
{
	if (i % 3 == 0 && i % 5 != 0)
{
		printf("Fizz ");
}
	else if (i % 5 == 0 && i % 3 != 0)
{
		printf("Buzz ");
}
	else if (i % 5 == 0 || i % 3 == 0)
{
		printf("FizzBuzz ");
}
	else
{
		printf("%d ", i);
}
}

	printf("Buzz\n");
	return (0);

}

