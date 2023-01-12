#include "lists.h"

/**
 *add_dnodeint - add node at the beginging
 *@head: the head pointer
 *@n: the data
 *Return: the ponter of the new added node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->next = *head;
	temp->n = n;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
