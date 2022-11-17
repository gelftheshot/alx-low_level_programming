#include "variadic_functions.h"

/**
*print_numbers - prints numbers
*@separator: is the separator of numbers
*@n: is the number of arrgument
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list gelf;

	va_start(gelf, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(gelf, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(gelf);
}
