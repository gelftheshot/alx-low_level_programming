#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 * @h: A pointer to the head of the listint_t
 * Return: The number of elements in the listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t lennodes = 0;

	while (h)
	{
		lennodes++;
		h = h->next;
	}

	return (lennodes);
}
