#include "lists.h"

/**
 *free_dlistint - frees dlistint
 *@head: the head of the list
 *@Return: nothing it is void
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

