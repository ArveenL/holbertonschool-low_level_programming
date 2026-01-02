#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - gives the index of a key
 * @key: points to first char of string(key)
 * @size: size of array
 *
 * Return: index at which the key/value pair
 * should be stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL || size == 0)
	return (0);

	hash = hash_djb2(key);
	hash = (hash % size);
	return (hash);
}
