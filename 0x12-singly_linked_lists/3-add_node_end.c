#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *newstr;
	int i;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	newstr = strdup(str);
	if (newstr == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; newstr[i] != '\0'; i++)
		;
	new->str = newstr;
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
