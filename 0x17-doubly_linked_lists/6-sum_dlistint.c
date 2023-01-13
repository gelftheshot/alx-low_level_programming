#include "lists.h"

/**
 *sum_dlistint- a function return sum
 *@head: is the first pointer of the list
 *Return: the sum of the list of data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	if (head == NULL)
		return (0);
	while (ptr)
	{
		sum = sum + (ptr->n);
		ptr = ptr->next;
	}

	return (sum);
}
