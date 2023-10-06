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

