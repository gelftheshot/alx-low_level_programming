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

	index = key_index((const unsigned char *)key, ht->size);

	if (key == NULL || ht == NULL || *key == '\0')
	{
		return (NULL);
	}

	if (index >= ht->size)
		return (NULL);

	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}

	return (NULL);
}
