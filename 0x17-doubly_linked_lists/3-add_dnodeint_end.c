#include "lists.h"

/**
*add_dnodeint_end - add node at the end of the function
*@head: is the head of the list
*@n: is the data
*Return: the aded element or NUll
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *temp = malloc(sizeof(dlistint_t));


	if (ptr == NULL)
		return (NULL);

	if (*head == NULL)
	{
		ptr->n = n;
		ptr->next = NULL;
		ptr->prev = NULL;
		*head = ptr;
	}

	else
	{
		temp = *head;
		ptr->n = n;
		ptr->next = NULL;
		ptr->prev = NULL;

		while (temp->next)
		{
			temp = temp->next;
		}

		temp->next = ptr;
		ptr->prev = temp;
	}
	return (ptr);

}
