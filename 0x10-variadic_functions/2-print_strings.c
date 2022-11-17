#include "variadic_functions.h"

/**
*print_strings - prints string
*@separator: separate consiquative strings
*@n: is the numer of argument
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list gelf;
	char *ptr;

	va_start(gelf, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(gelf, char *);

		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(gelf);
}
