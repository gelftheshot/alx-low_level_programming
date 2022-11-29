#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */


list_t *add_node(list_t **head, const char *str)
{
	char *newstr;
	list_t *new;
	int i;

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
	new->next = *head;

	*head = new;

	return (new);
}
