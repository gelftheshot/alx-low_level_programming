#include "lists.h"

/**
 *dlistint_len - print numer of elemts of the list
 *@h: the head pointer
 *Return: number of elelmnts of the list
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
