#include "hash_tables.h"

/**
 *hash_table_print - print hash table  data
 *@ht: the hasth tble it self
 *Return: it is void function
**/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned char comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma == 1)
				printf(", ");

			while (ht->array[i] != NULL)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
				if (ht->array[i] != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
