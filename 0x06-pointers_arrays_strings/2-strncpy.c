#include "holberton.h"

/**
 * _strncpy - string copy
 * @dest : pointer to char
 * @src : pointer to char
 * @n : int par
 * Return: the value of dust
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0' && x < n; x++)
	{
		dest[x] = src[x];
	}

	for ( ; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
