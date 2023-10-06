#include "hash_tables.h"

/**
 *hash_table_create - a functiong that creates a hash table.
 *@size: is the size of the hash table
 *Return: the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_hash = malloc(sizeof(hash_table_t));

	if (new_hash == NULL)
		return (NULL);
	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_node_t *) * size);

	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}

	while (i < size)
	{
		new_hash->array[i] = NULL;
		i++;
	}
	return (new_hash);
}
