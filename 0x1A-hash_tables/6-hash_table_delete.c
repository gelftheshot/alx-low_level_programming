#include "hash_tables.h"

/**
 *
 *
 *
**/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i  = 0;
	hash_node_t *n;
	
	while (i < ht->size)
	{
		n = ht->array[i];
		if (n != NULL)
		{
			free(n->key);
			free(n->value);
			free(n);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
