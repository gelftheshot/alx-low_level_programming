#include "hash_tables.h"

/**
 *hash_table_delete - free the hash table
 *@ht: the hash table
 *Return: Nothing
**/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i  = 0;
	hash_node_t *n;
	hash_node_t *t;

	if (!ht || !ht->array || !ht->size)
		return;

	while (i < (ht->size))
	{
		n = ht->array[i];
		while (n)
		{
			t = n->next;
			free(n->key);
			free(n->value);
			free(n);
			n = t;
		}
		i++;
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
