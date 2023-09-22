#include "main.h"

/**
 * _strspn - gets the length of a substring
 * @s: input string to search for substring
 * @accept: characters that prefix substring must include
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len1 = 0, len2 = 0;

	while (accept[len1] != '\0')
		len1++;
	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < len1; j++)
			if (s[i] == accept[j])
				len2++, j = len1;
			else
				if (j == len1 - 1)
					goto exit;
exit: return (len2);
}
