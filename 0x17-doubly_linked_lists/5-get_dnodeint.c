#include "lists.h"

/**
 *get_dnodeint_at_index- a function the return nth node
 *@head: the head pointer
 *@index: the indeth to be returned
 *Return: the indeth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i, j = 0;

	if (head == NULL)
		return (NULL);
	while (ptr->next)
	{
		ptr = ptr->next;
		j++;
	}

	if (index > j)
		return (NULL);
	ptr = head;
	for (i = 0; i < index; i++)
		ptr = ptr->next;

	return (ptr);
}
