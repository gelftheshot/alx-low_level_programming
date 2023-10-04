#include "lists.h"

/**
 *The commment section
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL):
			return (NULL);
		head = head->next;
		i++;
	}
	
	return (head);
}
