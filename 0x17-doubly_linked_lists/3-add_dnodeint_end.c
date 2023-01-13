#include "lists.h"

/**
 *add_dnodeint_end- is a function add node at end
 *@head: is the first node of the list
 *@n: the data to be added
 *Return: the pointer to the added node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *ptr = NULL;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;
	temp->prev = ptr;
	return (temp);
}
