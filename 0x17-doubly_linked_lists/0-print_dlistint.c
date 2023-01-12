#include "main.h"

/**
 * print_dlistint - print the elements of the node
 *@h: is the head pointer of the list
 *Return: the number of nods
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
