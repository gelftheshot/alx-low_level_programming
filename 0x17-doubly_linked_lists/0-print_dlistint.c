#include "lists.h"

/**
 * print_dlistint - a function that prints data of doubly liked list
 * @h: is the head of the doubly liked list
 * Return: number of data
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_ele = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_ele++;
		h = h->next;

	}
	return (num_ele);
}
