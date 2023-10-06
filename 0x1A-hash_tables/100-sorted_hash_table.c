#include "hash_tables.h"

/**
 *
 *
 *
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_node;
	unsigned long int i = 0;

	new_node = malloc(sizeof(shash_table_t));
	if (new_node == NULL)
		return (NULL);
	new_node->size = size;
	new_node->array = malloc(sizeof(shash_table_t *) * size);
	
	if (new_node->array == NULL)
		return (NULL);

	while (i < size)
	{
		new_node->array[i] = NULL;
		i++;
	}
	
	new_node->shead = NULL;
	new_node->stail = NULL;
	return (new_node);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)

{
	shash_node_t *new_node;
	shash_node_t *ptr;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);


	index = key_index((const unsigned char *)key, ht->size);

	ptr = ht->shead;
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (1);
		}
		ptr = ptr->snext;
	}

	new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}

	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	
	else
	{
		ptr = ht->shead;
		while (ptr->snext != NULL && strcmp(ptr->snext->key, key) < 0)
			ptr = ptr->snext;
		new_node->sprev = ptr;
		new_node->snext = ptr->snext;
		if (ptr->snext == NULL)
			ht->stail = new_node;
		else
			ptr->snext->sprev = new_node;
		ptr->snext = new_node;
	}

	return (1);
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *n;

	if (key == NULL || ht == NULL || *key == '\0')
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	n = ht->array[index];
	while (n)
	{
		if (strcmp(n->key, key) == 0)
			return (n->value);
		n = n->next;
	}

	return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
		return;

	n = ht->shead;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->snext;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
		return;

	n = ht->stail;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->sprev;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *n, *ptr;

	if (ht == NULL)
		return;

	n = ht->shead;

	while (n)
	{
		ptr = n->snext;
		free(n->key);
		free(n->value);
		free(n);
		n = ptr;
	}

	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
