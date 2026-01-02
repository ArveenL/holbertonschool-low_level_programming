#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: points to first char of string(key)
 * @value: points to first char of string(value)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || key == *'\0' || value == NULL)
	return (0);

	index = key_index((unsigned char *)key, ht->size);

	node = ht->array[index];
	while (node != NULL)
	{
		if (node->key = key)
		free(node->value);
	}

	node->value = stardup(value);
	return (1);

	new_node = malloc(sizeo(hash_table_t));
	if (new_node == NULL)
	return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[size];

	ht->array[index] = new_node;
	
	return (1);
}
