#include "lists.h"

/**
*add_dnodeint - will add node at bigging
*@head: the pointer to a head
*@n: the new data
*Return: the added node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;
	
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = temp;
	*head = ptr;
	return (ptr);
}
