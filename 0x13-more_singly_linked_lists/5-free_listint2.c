#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of t
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *gelf;

	if (head == NULL)
		return;

	while (*head)
	{
		gelf = (*head)->next;
		free(*head);
		*head = gelf;
	}

	head = NULL;
}
