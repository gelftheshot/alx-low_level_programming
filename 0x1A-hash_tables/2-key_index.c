#include "hash_tables.h"

/**
 *key_index - is a function that returns the value to key
 *@key: the given key
 *@size: the size of the hash table
 *Return: the value of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = hash_djb2(key);
	return (value % size);
}
