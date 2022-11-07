#include "holberton.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add numbers
 * @n1: text representation of first num
 * @n2: text representation of second nuj
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int flow = 0, i = 0, j = 0, jerry = 0;
	int tom = 0, val2 = 0, tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || flow == 1)
	{
		if (i < 0)
			tom = 0;
		else
			tom = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		tot = tom + val2 + flow;
		if (tot >= 10)
			flow = 1;
		else
			flow = 0;
		if (jerry >= (size_r - 1))
			return (0);
		*(r + jerry) = (tot % 10) + '0';
		jerry++;
		j--;
		i--;
	}
	if (jerry == size_r)
		return (0);
	*(r + jerry) = '\0';
	rev_string(r);
	return (r);
}
