#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *abc;
	int c, i, j, a;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	abc = malloc((c + 1) * sizeof(char));

	if (abc == NULL)
	{
		free(abc);
		return (NULL);
	}

	for (i = j = a = 0; a < c; j++, a++)
	{
		if (av[i][j] == '\0')
		{
			abc[a] = '\n';
			i++;
			a++;
			j = 0;
		}
		if (a < c - 1)
			abc[a] = av[i][j];
	}
	abc[a] = '\0';

	return (abc);
}
