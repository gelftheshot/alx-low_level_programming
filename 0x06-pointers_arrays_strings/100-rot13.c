#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - encoder to rot13
 * @s: pointer to string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char tom[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char jerry[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == tom[j])
			{
				s[i] = jerry[j];
				break;
			}
		}
	}
	return (s);
}
