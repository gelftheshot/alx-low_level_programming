#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1 : pointerto char
 * @s2 : pointer to char
 * Return: the value of dust
 */

int _strcmp(char *s1, char *s2)
{
	int x;
	int y;

	x = 0;

	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
	{
		x++;
	}
	y = s1[x] - s2[x];
	return (y);
}
