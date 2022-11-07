#include "holberton.h"

/**
 * leet - encodig of str
 * @s: pointer to char
 * Return: *s
 */

char *leet(char *s)
{
	int i;
	int j;
	char gelf[] = "ol_ea__t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; gelf[j] != '\0'; j++)
		{
			if (s[i] == gelf[j] || s[i] == (gelf[j] - 32))
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
