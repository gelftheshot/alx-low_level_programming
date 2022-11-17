#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - variadic fuction to add all arg
*@n: number of arg
*Return: the sum of all
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list gelf;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(gelf, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(gelf, int);
	}

	va_end(gelf);

	return (sum);
}
