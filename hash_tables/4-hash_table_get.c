#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to hash table to look into
 * @key: pointer to first char of key
 *
 * Return: value associated with the element, 
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];
	while (node != NULL)
	{
        	if (strcmp(node->key, key) == 0) /* compare stored key with the searched key */
            	return node->value;              /* key found → return its value */

		node = node->next;		/* move to next node in the list */
    	}

    		return NULL;
}
