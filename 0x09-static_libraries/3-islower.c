#include "main.h"

/**
 * _islower - checks for lowercase
 * @l: l is an ascii number for character
 *
 * Return: 1 if lowercase
 */

int _islower(int l)
{
	if (l >= 'a' && l <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
