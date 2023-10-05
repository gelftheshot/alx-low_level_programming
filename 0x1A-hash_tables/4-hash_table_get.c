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

	if (ht->array[index])
	{
		return (ht->array[index]->value);
	}
	return (NULL);
}
