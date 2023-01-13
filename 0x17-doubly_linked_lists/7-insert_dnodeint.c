#include "lists.h"

/**
 *insert_dnodeint_at_index- add node at idx pos
 *@h: head pointer
 *@idx: index to be inserted
 *@n: the data to be inserted
 *Return: the added pointer
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t  *temp;
	dlistint_t *ptr1 = *h, *ptr2 = *h;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	while (idx--)
	{
		ptr2 = ptr1;
		ptr1 = ptr1->next;
	}


	temp->n = n;
	ptr2->next = temp;
	temp->prev = ptr2;
	ptr1->prev = temp;
	temp->next = ptr1;
	return (temp);

}
