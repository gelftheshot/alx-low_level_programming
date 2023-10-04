#include "lists.h"

/**
 *dlistint_len - a function to know len of dlist
 *@h: is the head pointer
 *Return: the number of data
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
