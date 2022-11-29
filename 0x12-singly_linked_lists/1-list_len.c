#include "lists.h"

/**
 * list_len - num of element
 * @h: The linked list_t list.
 * Return: len of elelmts
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}

