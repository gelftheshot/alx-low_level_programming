#include "main.h"
/**
 *binary_to_uint - a function that converts a binary number to an unsigned int
 *@b: a binary representation of a number
 *Return: 0 if  the binary is null or if it cotain other than 0 and 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int multi = 1;
	int len = 0;

	if (b[0] == '\0')
		return (0);

	while (b[len])
		len++;
	len--;

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		uint = uint + (b[len] - '0') * multi;
		multi <<= 1;
		len--;
	}

	return (uint);
}
