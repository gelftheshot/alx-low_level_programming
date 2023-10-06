#include "hash_tables.h"

/**
 *hash_table_get - get keky assosated vith value
 *@ht: is the hash table
 *@key: the key value
 *Return: the vluae assosated vith the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *n;

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
