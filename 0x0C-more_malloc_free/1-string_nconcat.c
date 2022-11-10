#include "main.h"

/**
 * string_nconcat - a function to concatenate.
 * @s1: first string
 * @s2: second string
 * @n: index of the s2
 * Return: concatinated str pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	if (n > j)
		n = j;
	ptr = malloc((i + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (0);

	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}

	for (; k < (i + n); k++)
	{
		ptr[k] = s2[k - i];
	}
	ptr[k] = '\0';

	return (ptr);
}

