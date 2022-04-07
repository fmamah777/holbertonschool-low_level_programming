#include "hash_tables.h"

/**
* key_index - index of key in hash table
* @key: indesx key
* @size: is size of the array of indexes
* Return: returns the index to be stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0)
	return (0);
	hash = hash_djb2(key);
	return (hash % size);
}
