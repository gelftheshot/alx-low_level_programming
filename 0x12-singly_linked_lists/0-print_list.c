#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of the single linked list.
 * @h: the pointer to the first of the linked list.
 * Return: The number of nodes in nodes.
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		num++;
		h = h->next;
	}

	return (num);
}

