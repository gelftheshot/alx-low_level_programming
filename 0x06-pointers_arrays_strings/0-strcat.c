#include "holberton.h"

/**
 * *_strcat - function to concatinat str
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}

	dest[x] = '\0';
	return (dest);
}
