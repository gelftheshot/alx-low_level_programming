#include "lists.h"

/**
 *delete_dnodeint_at_index- delet indexth node
 *@head: is the head pointer of the node
 *@index: the index to be deleted
 *Return: 1 if succec -1 for failer
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr1 = *head, *ptr2;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head == NULL)
			(*head)->prev = NULL;
		free(ptr1);
		ptr1 = NULL;
		return (1);
	}

	while (index--)
	{
		ptr2 = ptr1;
		ptr1 = ptr1->next;
		if (ptr1 == NULL)
			return (-1);
	}
	ptr2->next = ptr1->next;
	free(ptr1);
	ptr1 = NULL;
	return (1);
}
