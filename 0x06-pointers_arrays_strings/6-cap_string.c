#include "holberton.h"
#include <stdio.h>

/**
 * *cap_string - do some thing
 * @s: pointer to char
 *
 * Return: the value of *s
 */

char *cap_string(char *s)
{
	int i, j;
	char check[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
				for (j = 0; check[j] != '\0'; j++)
					if (s[i] == check[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
						s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}
