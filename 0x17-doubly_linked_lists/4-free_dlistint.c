#include "lists.h"

/**
 *free_dlistint- a function that free doubl list
 *@head: is the head pointer of the list
 *Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
