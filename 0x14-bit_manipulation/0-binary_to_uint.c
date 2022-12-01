#include "main.h"
/**
*_pow - the power of a function
*@x: the first parameter
*@y: the second parameter
*Return: the power of x to the y
*/
int _pow(int x, int y)
{
	int i = 1;
	int j;

	for (j = 0; j < y; j++)
	{
		i = i * x;
	}
	return (i);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of binary numbers.
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int some = 0;
	int i, j, k = 0;

	if (b == '\0')
		return (0);
	for (j = 0; b[j] != '\0'; j++)
		;
	i = j - 1;
	while (i >= 0)
	{
		if (b[i] == '1')
		{
			some = some + _pow(2, k);

		}
		else if (b[i] == '0')
		{
			i--;
			k++;
			continue;
		}
		else
			return (0);
		k++;
		i--;
	}
	return (some);
}
