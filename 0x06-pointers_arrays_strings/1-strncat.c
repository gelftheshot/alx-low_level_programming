#include "holberton.h"

/**
 * _strncat - concatination
 * @dest : pointer to char
 * @src : pointer to char
 * @n : int para
 * Return: pointer to dust
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;

	for (y = 0; y < 1000; y++)
	{
		if (dest[y] == '\0')
		{
			break;
		}
		x++;
	}

	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
