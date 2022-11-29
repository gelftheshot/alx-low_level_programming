#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t
 * @h: A pointer to the head of the list_t list.
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t lennode = 0;

	while (h)
	{
		lennode++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (lennode);
}
