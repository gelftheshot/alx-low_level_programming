#include "hash_tables.h"

/**
 *hash_table_set - add or update key value pair
 *@ht: the hash table
 *@key: the key of the hashtable
 *@value: the value
 *Return: 1 on success 0 on failre
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);


	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));

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
	return (1);
}
