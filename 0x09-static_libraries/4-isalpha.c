#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @l: l is an ascii number for character
 *
 * Return: 1 if letter o if not
 */

int _isalpha(int l)
{
	if (l >= 'a' && l <= 'z')
	{
		return (1);
	}
	else if (l >= 'A' && l <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
